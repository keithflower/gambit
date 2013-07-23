// ------------------------------------------------------------
//    Gambit for Android
//
//    About
//
//    Copyright (c) by Keith Flower, 2011 - 2012
//
// ------------------------------------------------------------
package org.keithflower.gambit;
import android.app.Activity;
import android.os.Bundle;
import android.webkit.WebView;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;

public class About extends Activity {

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(R.menu.menu, menu);
        return true;
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        WebView webview = new WebView(this);
        setContentView(webview);
        webview.loadUrl("file:///android_asset/about.html");
    }
}
