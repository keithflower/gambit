// ------------------------------------------------------------
//    Gambit for Android
//
//    Gui.java - user interface for Gambit REPL
//
//    Copyright (c) by Keith Flower, 2011-2012.
//
// ------------------------------------------------------------

package org.keithflower.gambit;

import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.text.MessageFormat;
import java.util.ArrayList;
import java.util.Stack;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.Editable;
import android.util.Log;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnKeyListener;
import android.webkit.JsResult;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.webkit.WebChromeClient;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.Toast;
import android.widget.ViewFlipper;
import org.keithflower.gambit.ReplWindow;
import org.keithflower.gambit.WebViewPrecis;

public class Gui extends Activity {
	
    // ------------------------------------------------------------
    // Message types for updating the UI
    // ------------------------------------------------------------
    private static final int SHOW_WEBVIEW          = 100;
    private static final int SHOW_REPLVIEW         = 101;
    private static final int SET_CONTENT           = 102;
    private static final int SET_CONTENT_FROM_FILE = 103;
    private static final int OPEN_URL              = 104;
    private static final int ADD_OUTPUT            = 105;
    private static final int RESET_REPL            = 106;
    private static final int SHOW_CANCEL_BUTTON    = 107;
    private static final int HIDE_CANCEL_BUTTON    = 108;
    
    // ------------------------------------------------------------
    // Variables common to the activity.
    // ------------------------------------------------------------
    private static Resources         resources;
    private static SharedPreferences prefs;							
    private static String            repl_view_content;							
    private static String            webview_content;
    private static Handler           ui_h;										
    private static Thread            heart;
    private static boolean           heart_beat;
    private static boolean           activity_was_created     = false;
    private static boolean           activity_was_finished    = false;
    private static ArrayList<String> expr_history             = new ArrayList<String>();
    SynchronousJavascriptInterface   jsi                      = new SynchronousJavascriptInterface(this);
    private static Stack<Integer>    viewStack                = new Stack<Integer>();
	
    // ------------------------------------------------------------
    // Constants
    // ------------------------------------------------------------
    private final String nbsp       = new String("\u00a0"); 
    private final String prompt     = "> " + nbsp;
    private final String PREFS_NAME = "android_gambit_prefs";
    
    // ------------------------------------------------------------
    // Gambit functions callable via JNI
    // ------------------------------------------------------------
    public native synchronized void heartbeat();
    public native synchronized void initGambit();
    public native synchronized void cleanupGambit();
    public native synchronized void addinput (String input);
    public native synchronized void setcwd (String cwd);
    public native synchronized void sendevent (String event);
    public native synchronized void handleevent (String event);
    public native synchronized void startReplServer();

    // ------------------------------------------------------------
    // Methods callable from gambit via JNI 
    // ------------------------------------------------------------
	
    public static void setWebViewContentFromFile (int i, String s) {
        try {
            setWebViewContent(i, LoadFile(s));
        } catch (IOException e) {
            e.printStackTrace();
        }  
    }
	
    public static void segmCtrlSetTitle (int i, String s) {
        // Not implemented - there seems no robust way
        // at present to get real horizontal segmented controls for
        // Android so for now we just use the menu (which in 
        // versions >= 3.0 include action bars in place of older
        // menus).
    }
	
    public String evalJSInWebView (int i, String s) {
        GambitWebView wv = ((GambitWebView) findViewById(R.id.editview));
        String jsResult = jsi.getJSValue(wv, s);
        return (jsResult);
    }
	
    public void showCancelButton () {
        Message msg = new Message();
        msg.what = SHOW_CANCEL_BUTTON;
        ui_h.sendMessage(msg);
    }

    public void hideCancelButton () {
        Message msg = new Message();
        msg.what = HIDE_CANCEL_BUTTON;
        ui_h.sendMessage(msg);
    }
	
    public static void showTextView (int i) {
        showReplView();
    }
	
    public static void setNavigation (int i) {
        // not implemented.
    }
	
    public static String getPasteboard () {
        // TODO 
        return ("Pasteboard not implemented");
    }
	
    public static void addexpr (String s) {
        expr_history.add(s);
    }
	
    public static void setPref (String key, String value) {
        SharedPreferences.Editor e = prefs.edit();
        e.putString(key, value);
        e.commit();
    }

    public static String getPref (String key) {
        String value = prefs.getString(key, null);
        return value;
    }
	
    public static void showWebView (int i) {
        WebViewPrecis wv = new WebViewPrecis();
        wv.s = "";
        wv.n = i;
        Message msg = new Message();
        msg.what = SHOW_WEBVIEW;
        msg.obj = wv;
        ui_h.sendMessage(msg);
    }
	
    public static void showReplView () {
        Message msg = new Message();
        msg.what = SHOW_REPLVIEW;
        ui_h.sendMessage(msg);
    }
	
    public static void setWebViewContent (int i, String s) {
        WebViewPrecis wv = new WebViewPrecis();
        wv.s = s;
        wv.n = i;
        Message msg = new Message();
        msg.what = SET_CONTENT;
        msg.obj = wv;
        ui_h.sendMessage(msg);
    }
	
    public static void openURL (String s) {
        Message msg = new Message();
        msg.what = OPEN_URL;
        msg.obj = s;
        ui_h.sendMessage(msg);
    }
	
    public static synchronized void addOutputToTextView (String s) { 
        Message msg = new Message();
        msg.what = ADD_OUTPUT;
        msg.obj = s; 
        ui_h.sendMessage(msg);
    } 
	
    public void nativeCrash() {
        Log.e("Gambit for Android", "REPL view:\n" + ((EditText) findViewById(R.id.replview)).getText().toString());
        new RuntimeException("native crash").printStackTrace();
        startActivity(new Intent(this, CrashHandler.class));
    }
	
    // ------------------------------------------------------------
    // Define an interface for handling webview events. These events
    // typically get generated by pushing HTML buttons on a webview
    // ------------------------------------------------------------
    final class JavaScriptInterface {
        Context mContext;
        JavaScriptInterface(Context c) {
            mContext = c;
        }
        public void onWebViewEvent (final String s) {
            sendevent(s);
        }
    }
	
    // ------------------------------------------------------------
    // For handling the Android 'back' key, maintain a little stack 
    // of the views displayed. Don't push duplicate views 
    // (like if someone jumps to repl while already
    // in the repl view...this also handles the multiple showWebView
    // calls that get generated when the repo is accessed.
    // ------------------------------------------------------------
    private static void pushView(int n) {
        if (viewStack.empty() || n != viewStack.peek()) {
            viewStack.push(n);
        }
    }

    // ------------------------------------------------------------
    // Handle back button - this is problematic at present because
    // 'back' can cause destruction of activity, leaving gambit
    // native process running. Here a 'back' pops views until we
    // get back to the splash screen, then a back there effectively 
    // generates onPause() event for which we kill the process (see below).
    // ------------------------------------------------------------
    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if ((keyCode == KeyEvent.KEYCODE_BACK)) {
            int n = viewStack.pop();
            if (n != 0) {
                int t = viewStack.peek();
                final ViewFlipper vf = (ViewFlipper) findViewById(R.id.flipper);
                switch (t) {
                case 0: // splash view
                    vf.setDisplayedChild(0); 
                    break;
                case 1:
                    vf.setDisplayedChild(1); 
                    sendevent("NAV1");
                    break;
                case 2:
                    vf.setDisplayedChild(2); 
                    sendevent("NAV2");
                    break;
                case 3:
                    vf.setDisplayedChild(3); 
                    sendevent("NAV3");
                    break;
                case 4:
                    vf.setDisplayedChild(4); 
                    sendevent("NAV4");
                    break;
                }
                return true;
            }
        }
        return super.onKeyDown(keyCode, event);
    }

    // ------------------------------------------------------------
    // Handle onPause() - gets called in at least two situations: 
    //    - activity pausing but not being destroyed: no need to save 
    //      state of activity
    //    - activity being destroyed ie "finished" via back button
    //      press: - have to save state of activity
    //
    //      Back button on Android devices is supposed to destroy the
    //	    "activity", while leaving the "process" running. At present
    //      leaving gambit process running presents some problems
    //      so we are instead killing the process here
    // ------------------------------------------------------------
    public void onPause () {
        super.onPause();
        if (isFinishing()) {
            android.os.Process.killProcess(android.os.Process.myPid());
        }
    }
	
    // ------------------------------------------------------------
    // EXPERIMENTAL: Handle out-of-memory condition or some other 
    // environment causes Android OS to kill our process: store a 
    // string representation of the repl view, as well as the 
    // expression history that will allow us to restore the repl 
    // environment.
    // ------------------------------------------------------------
    @Override
    public void onSaveInstanceState (Bundle b) {
        b.putStringArrayList("expr_history", expr_history);
        EditText repl_view = (EditText) findViewById(R.id.replview);
        String rv = repl_view.getText().toString();
        b.putString("repl_view", rv);
    }

    // ------------------------------------------------------------
    // EXPERIMENTAL: Handle Android restarting our process: restore 
    // the repl view from its string representation, and restore 
    // the repl environment by reevaluating the expression history.
    // ------------------------------------------------------------
    @Override
    public void onRestoreInstanceState (Bundle b) {
        expr_history = b.getStringArrayList("expr_history");
        for (String s : expr_history) {
            addinput (s);
        }
        Message msg = new Message();
        msg.what = RESET_REPL;
        msg.obj = b.getString("repl_view"); 
        ui_h.sendMessage(msg);
    }
	
    // ------------------------------------------------------------
    // Handle device rotation/configuration changes by resetting the view
    // ------------------------------------------------------------
    @Override
    public void onConfigurationChanged(Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
        final ViewFlipper vf = (ViewFlipper) findViewById(R.id.flipper);
        vf.setDisplayedChild(vf.getDisplayedChild() );
    }

    // ------------------------------------------------------------
    // Handle onCreate():
    //     - create webview and repl view for the activity
    //     - set up handler for updating UI state
    //     - initialize Gambit system
    //     - start a timer that will periodically ask Gambit 
    // 	     threads to yield
    //     - setup key listener to handle keyboard events
    //       of interest in repl ie RETURN
    // ------------------------------------------------------------
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        prefs = getSharedPreferences(PREFS_NAME, 0);

        // Set up the various webviews, including Javascript interfaces
        final GambitWebView editview = (GambitWebView) findViewById(R.id.editview);
        final GambitWebView splashview = (GambitWebView) findViewById(R.id.splashview);
        final GambitWebView wikiview = (GambitWebView) findViewById(R.id.wikiview);
        final GambitWebView helpview = (GambitWebView) findViewById(R.id.helpview);
        final ImageButton cancelButton = (ImageButton) findViewById(R.id.cancelFloat);
        editview.getSettings().setJavaScriptEnabled(true);
        // Following needed for Android 1.6 - see http://code.google.com/p/android/issues/detail?id=3355
        editview.getSettings().setSavePassword(false); 
        jsi = new SynchronousJavascriptInterface(this);//   Has to be done before page load
        editview.addJavascriptInterface(jsi, jsi.getInterfaceName());

        wikiview.getSettings().setJavaScriptEnabled(true);
        // Following needed for Android 1.6 as noted above
        wikiview.getSettings().setSavePassword(false); 
        wikiview.addJavascriptInterface(new JavaScriptInterface(this), "Android");
		
        editview.setWebViewClient(new WebViewClient(){
            @Override
            public boolean shouldOverrideUrlLoading(WebView wView, String url) {
                sendevent(url.toString());
                return true; 
            }
        }); 
		 
        helpview.setWebViewClient(new WebViewClient(){
            @Override
            public boolean shouldOverrideUrlLoading(WebView wView, String url) {
                sendevent(url.toString());
                return true;
            }
        }); 

       editview.setWebChromeClient( new WebChromeClient() {
            @Override
            public boolean onJsAlert(WebView view, String url, String message, JsResult result) {
                result.confirm();
                return true;
            }
            @Override 
            public boolean onJsConfirm(WebView view, String url, String message, final JsResult result) {
                new AlertDialog.Builder(Gui.this)
                    .setTitle("Confirm")
                    .setMessage(message)
                    .setPositiveButton(android.R.string.ok,
                                       new DialogInterface.OnClickListener() {
                                           public void onClick(DialogInterface dialog,
                                                               int which) {
                                               result.confirm();
                                           }
                                       })
                    .setNegativeButton(android.R.string.cancel,
                                       new DialogInterface.OnClickListener() {
                                           public void onClick(DialogInterface dialog,
                                                               int which) {
                                               result.cancel();
                                           }
                                       }).create().show();

                return true;   
            }
        });
        resources = getResources();

        // Maintain a little array of webviews corresponding
        // to the webview indices Gambit uses.
        final GambitWebView[] webviews = new GambitWebView[4]; 
        webviews[0] = splashview;
        webviews[1] = wikiview;
        webviews[2] = helpview;
        webviews[3] = editview;

        // ------------------------------------------------------------
        // Define a handler for maintaining the UI state. Messages
        // from non-UI threads are posted here to update the UI (non-
        // UI threads are not allowed to update the UI).
        // ------------------------------------------------------------
        ui_h = new Handler() {
            @Override
            public void handleMessage(Message msg) {
                EditText replview = (EditText) findViewById(R.id.replview);
                final ViewFlipper vf = (ViewFlipper) findViewById(R.id.flipper);
                WebViewPrecis wv;
                switch (msg.what) {
                case SET_CONTENT:
                    wv = (WebViewPrecis) msg.obj;
                    webviews[wv.n].loadDataWithBaseURL("file:///android_asset/", wv.s, "text/html", "utf-8", null);
                    break;
                case (SHOW_WEBVIEW):
                    wv = (WebViewPrecis) msg.obj;
                    pushView(wv.n);
                    vf.setDisplayedChild(wv.n);
                    break;
                case (SHOW_REPLVIEW):
                    pushView(4);
                    replview = (EditText) findViewById(R.id.replview);
                    vf.setDisplayedChild(4);
                    Editable etext = replview.getText();
                    replview.setSelection(etext.length());
                    break;
                case (OPEN_URL):
                    String url = msg.obj.toString();
                    Intent i = new Intent(Intent.ACTION_VIEW);
                    i.setData(Uri.parse(url));
                    startActivity(i);
                    break;
                case (ADD_OUTPUT):
                    replview.append((CharSequence) msg.obj + nbsp);
                    break;
                case (RESET_REPL):
                    replview.setText((CharSequence) msg.obj);
                    etext = replview.getText();
                    replview.setSelection(etext.length());
                    break;
                case (SHOW_CANCEL_BUTTON):
                    cancelButton.setVisibility(android.view.View.VISIBLE);
                    break;
                case (HIDE_CANCEL_BUTTON):
                    cancelButton.setVisibility(android.view.View.INVISIBLE);
                    break;
                default:
                    break;
                }
            }
        };

        if (! activity_was_created) {
            initGambit();
			
            heart_beat = true;
            heart = new Thread() {
                @Override
                public void run() {
                    try {
                        while (heart_beat) {
                            sleep(100);
                            heartbeat();
                        }
                    } catch (InterruptedException e) {
                        cleanupGambit();
                        android.os.Process.killProcess(android.os.Process.myPid());
                    }
                }
            };

            heart.start();

            // Tell gambit what directory it started in.
            setcwd(this.getApplicationInfo().dataDir);
            // Don't reinitialize Gambit on reentry to activity
            activity_was_created = true; 
        }


        cancelButton.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                sendevent("cancel");
            }
        });
        
        // ------------------------------------------------------------
        // Listen for key 'ENTER' to trigger actions in the repl
        // ------------------------------------------------------------
        final ReplWindow replview = (ReplWindow) findViewById(R.id.replview);
        replview.setOnKeyListener(new OnKeyListener() {

            public boolean onKey(View v, int keyCode, KeyEvent event) {
                // if the event is key-down on the "enter" button
                if ((event.getAction() == KeyEvent.ACTION_DOWN) &&
                    (keyCode == KeyEvent.KEYCODE_ENTER)) {

                    if (replview.isCursorInEvaluable()) {
                        String expr = replview.getCurrentText().replaceAll(nbsp, " ");
                        replview.append("\n");
                        if (! isExit(expr)) {
                            addinput(expr + "\n");
                            expr_history.add(expr + "\n");
                        }
                    }
                    else {
                        replview.append(" " + replview.getCurrentText().replaceAll(nbsp, " "));
                    } 
                    // Leave caret at end of repl
                    Editable repltext = replview.getText();
                    replview.setSelection(repltext.length());
                    return true;
                }
                return false;
            }
        });  
    } 
	
    // ------------------------------------------------------------
    // Preempt (exit) calls...allowing gambit to (exit) results
    // in segmentation fault. If (exit) is called, we interrupt 
    // our heartbeat thread, cleanup gambit, and kill this process
    // (see exception handling for heart thread).
    // ------------------------------------------------------------
    private boolean isExit (String s) {
        if (s.equals("(exit)")) {
            heart_beat = false;
            heart.interrupt();
            return true;
        }
        else return false;
    }
	
    // ------------------------------------------------------------
    // Construct and handle menu
    // ------------------------------------------------------------
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(R.menu.menu, menu);
        return true;
    }
	
    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        Message msg;
		
        switch (item.getItemId()) {
        case R.id.repl:
            sendevent("NAV4");
            break;
        case R.id.scripts:
            sendevent("NAV3");
            break;
        case R.id.help:
            sendevent("NAV2");
            break;
        case R.id.repo:
            sendevent("NAV1");
            break;
        case R.id.share:
            EditText repl_view = (EditText) findViewById(R.id.replview);
            final Intent shareIntent = new Intent(android.content.Intent.ACTION_SEND);
            shareIntent.setType("text/plain");
            shareIntent.putExtra(android.content.Intent.EXTRA_SUBJECT, "Gambit for Android REPL");
            shareIntent.putExtra(android.content.Intent.EXTRA_TEXT, repl_view.getText().toString());
            startActivity(Intent.createChooser(shareIntent, "Send via..."));
            break;
        case R.id.about:
            Intent ia = new Intent(Gui.this, About.class);
            startActivity(ia);
            break;
        }
        return true;
    }
	
    // ------------------------------------------------------------
    // Utility function to read a local logcat file (on crash)
    // ------------------------------------------------------------
    static public String readAllOf(InputStream s) throws IOException
    {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(s), 8096);
        String line;
        StringBuilder log = new StringBuilder();
        while ((line = bufferedReader.readLine()) != null) {
            log.append(line);
            log.append("\n");
        }
        return log.toString();
    }
	
    static public String getVersion(Context c)
    {
        try {
            return c.getPackageManager().getPackageInfo(c.getPackageName(),0).versionName;
        } catch(Exception e) { return c.getString(R.string.unknown_version); }
    }
	
    // ------------------------------------------------------------
    // Utility function to attempt to email report on crash
    // ------------------------------------------------------------
    static public boolean tryEmailAuthor(Context c, boolean isCrash, String body)
    {
        String addr = c.getString(R.string.author_email);
        Intent i = new Intent(Intent.ACTION_SEND);
        String modVer = "";
        try {
            Process p = Runtime.getRuntime().exec(new String[]{"getprop","ro.modversion"});
            modVer = readAllOf(p.getInputStream()).trim();
        } catch (Exception e) {}
        if (modVer.length() == 0) modVer = "original";
        // (second empty address because of http://code.google.com/p/k9mail/issues/detail?id=589)
        i.putExtra(Intent.EXTRA_EMAIL, new String[]{addr, ""});
        i.putExtra(Intent.EXTRA_SUBJECT, 
                   MessageFormat.format(c.getString (
                                      isCrash ? R.string.crash_subject : R.string.email_subject),
                                      getVersion(c), Build.MODEL, modVer, Build.FINGERPRINT));
        i.setType("text/plain");
        i.putExtra(Intent.EXTRA_TEXT, body!=null ? body : "");
        try {
            c.startActivity(i);
            return true;
        } catch (ActivityNotFoundException e) {
            try {
                // Get the OS to present a nicely formatted, translated error
                c.startActivity(Intent.createChooser(i,null));
            } catch (Exception e2) {
                e2.printStackTrace();
                Toast.makeText(c, e2.toString(), Toast.LENGTH_LONG).show();
            }
            return false;
        }
    }
	
    public static String LoadFile(String fileName) throws IOException {  
        InputStream iS;  
        iS = resources.getAssets().open(fileName);  
        byte[] buffer = new byte[iS.available()];  
        iS.read(buffer);  
        ByteArrayOutputStream oS = new ByteArrayOutputStream();  
        oS.write(buffer);  
        oS.close();  
        iS.close();  
	  
        return oS.toString();  
    }  

    // ------------------------------------------------------------
    // Load gambit as library
    // ------------------------------------------------------------
    static {
        System.loadLibrary("gambit");
    }

}
