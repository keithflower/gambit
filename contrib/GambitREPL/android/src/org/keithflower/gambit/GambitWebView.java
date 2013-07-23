// ------------------------------------------------------------
//    Gambit for Android
//
//    GambitWebView - handle focus changes in a web view
//
//    Copyright (c) by Keith Flower, 2011 - 2012
//
// ------------------------------------------------------------
package org.keithflower.gambit;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.webkit.WebView;

public class GambitWebView extends WebView{

    public GambitWebView(Context context, AttributeSet attrs) {
        super(context, attrs);
    }

    @Override
    public void onWindowFocusChanged(boolean hasWindowFocus) {
        if (hasWindowFocus == false) {
        }
        super.onWindowFocusChanged(hasWindowFocus);
    }

}
