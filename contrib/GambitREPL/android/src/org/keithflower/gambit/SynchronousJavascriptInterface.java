// ------------------------------------------------------------
//    Gambit for Android
//
//    Copyright (c) by Keith Flower, 2011 - 2012.
//
//  Provides an interface for synchronous javascript calls
//  Based on idea by Brian Tate 
//      http://www.gutterbling.com/blog/synchronous-javascript-evaluation-in-android-webview/
// ------------------------------------------------------------

package org.keithflower.gambit;

import java.util.concurrent.CountDownLatch;
import android.content.Context;
import android.webkit.WebView;

public class SynchronousJavascriptInterface {
 
    Context mContext;
    private final String interfaceName = "SynchJS";
    private CountDownLatch latch = null;
    private String returnValue;
 
    public SynchronousJavascriptInterface(Context c) {
        mContext = c;
    }
 
    public String getJSValue(final WebView webView, String expression) {
        latch = new CountDownLatch(1); 

        final String code = "javascript:" + interfaceName + ".setValue((function(){try{return " + expression
            + ";}catch(js_eval_err){return '';}})());";

        runOnUiThread (new Runnable() {
            public void run() {
               webView.loadUrl(code);
            }
        });		
 
        return returnValue;
    }
 
    private void runOnUiThread(Runnable runnable) {
    }

    public void setValue(String value) {
        returnValue = value;
        try { latch.countDown(); } catch (Exception e) {} 
    }
 
    public String getInterfaceName(){
        return this.interfaceName;
    }
}

