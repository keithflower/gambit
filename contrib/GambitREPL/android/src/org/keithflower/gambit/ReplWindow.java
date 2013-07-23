// ------------------------------------------------------------
//    Gambit for Android
//
//    REPL window - represents the basic user interface 
//    for the Android Gambit REPL view.
//
//	  Copyright (c) by Keith Flower, 2011 - 2012
//
// Implements a rudimentary text grabber - when the cursor
// is placed on lines other than the currently evaluable 
// area (bottom line(s)), we highlight from the cursor to the 
// end of the line, giving visual cue for text that has in effect 
// been copied for pasting (yanking) the current expression on 
// "Enter" key down.
// ------------------------------------------------------------

package org.keithflower.gambit;

import android.content.Context;
import android.graphics.Color;
import android.text.Editable;
import android.text.Layout;
import android.text.Selection;
import android.text.Spannable;
import android.text.style.BackgroundColorSpan;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.widget.EditText;

public class ReplWindow extends EditText  {

	// ------------------------------------------------------------
	// Variables common to the class.
	//
	// TODO - remove hard coded version/prompt name
	// ------------------------------------------------------------

	private final static char[] prompt_array = {'>', ' ', '\u00a0'};
	final static String prompt = new String (prompt_array);
	private static int header_offset = "Gambit v4.6.1\n\n".length() + prompt.length();
	private static int prev_pos = header_offset;
	public int selectionStart = 0;
	public int selectionEnd = 0;

	// ------------------------------------------------------------
	// Constructors
	// ------------------------------------------------------------
	public ReplWindow(Context context, AttributeSet attrs, int defStyle) {
		super(context, attrs, defStyle);
	}

	public ReplWindow(Context context, AttributeSet attrs) {
		super(context, attrs);
	}

	public ReplWindow(Context context) {
		super(context);
	}

	// ------------------------------------------------------------
	// Set up any desired cursor listener
	// ------------------------------------------------------------
	protected OnCursorMoveListener cursorMoveListener;

    public void setOnCursorMoveListener (OnCursorMoveListener l) {
        cursorMoveListener = l;
    }
    
	// ------------------------------------------------------------
    // onTextChanged () - intercepted to keep track of prior 
    // cursor position.
	// ------------------------------------------------------------
    @Override
	protected void onTextChanged(CharSequence text, int start, int before, int after) {
	    	prev_pos = this.getSelectionStart();
	    	super.onTextChanged(text, start, before, after);
    }
    
	// ------------------------------------------------------------
    // onKeyDOwn () - intercepted to disallow backspacing up into
    // little Gambit "header" ie the version string
	// ------------------------------------------------------------
    @Override
	public boolean onKeyDown (int keyCode, KeyEvent event) {
		if ((event.getAction() == KeyEvent.ACTION_DOWN) &&
				(keyCode == KeyEvent.KEYCODE_DEL)) {
			if (this.getSelectionStart() <= header_offset) {
				return true;
			}
		}
		super.onKeyDown(keyCode, event);
		return false;
    }

    // ------------------------------------------------------------
	// onSelectionChanged() - used here for indication of current 
    // cursor position. This code also does the highlighting to
    // provide a visual cue of what text will be yanked into the
    // evaluable region.
    // ------------------------------------------------------------
    @Override   
    protected void onSelectionChanged(int selStart, int selEnd) { 

	    	final BackgroundColorSpan sy = new BackgroundColorSpan(Color.YELLOW);
	    	Editable e = this.getText();
	    	Layout layout = this.getLayout();
	
	    	if (layout != null) {
	    		int pos = this.getSelectionStart();
	    		if (isInYankable (pos)) {
	    			// Remove any current highlighting
	    			for (BackgroundColorSpan s: e.getSpans(0, e.length(), BackgroundColorSpan.class)) {
	    				e.removeSpan(s);
	    			}
	    			// Highlight from cursor position to end of line in non-evaluable regions. 
	    			// The current pos might have changed from above if user tried to move into
	    			// non-evaluable or yankable regions.
	    			pos = this.getSelectionStart();
	    			prev_pos = pos;
	    			int cur_line = layout.getLineForOffset(pos);
	    			if (! isCursorInEvaluable()) { 
	    				e.setSpan(sy, pos, layout.getLineEnd(cur_line), Spannable.SPAN_EXCLUSIVE_EXCLUSIVE);
	    			}
	    		}
	    	}
	    	// Update any listener
	    	if (this.cursorMoveListener != null) {
	    		this.cursorMoveListener.onCursorMove();
	    		selectionEnd = selEnd;
	    		selectionStart = selStart;
	    	}
    }
	
	// ------------------------------------------------------------
    // isInYankable() - is cursor in non-header region?
    // If so, move it to previous position. We could implement skip
    // of prompt strings here (although this proved somewhat 
    // problematic in practice).
	// ------------------------------------------------------------
    private boolean isInYankable (int pos) {
		if (isInHeader(pos)) {
			skipHeader();
			return false;
		}
		return true;
    }
    
	// ------------------------------------------------------------
    // isInHeader() - is cursor in header (first two lines of window)?
	// ------------------------------------------------------------
    private boolean isInHeader (int pos) {
		Layout layout = this.getLayout();
		int cur_line = layout.getLineForOffset(pos);
		if (cur_line < 2) {
			return true;
		}
		return false;
    }

	// ------------------------------------------------------------
    // skipHeader () - don't allow cursor in header.
	// ------------------------------------------------------------
    private void skipHeader () {
		this.setSelection (prev_pos);
    }
    
	// ------------------------------------------------------------
	// getCurrentText() - gets text indicated by cursor. In evaluable
	// regions, this is the text from the previous prompt (or newline) to the end 
	// of text. Otherwise, it's the text on the line where the cursor
	// is.
	// ------------------------------------------------------------
	public String getCurrentText () {

		String contents = this.getText().toString();
		int pos = this.getSelectionStart();
		Selection.extendToRightEdge((Spannable) this.getText(), this.getLayout()); 

		int sel_begin = this.getSelectionStart();
		int sel_end = this.getSelectionEnd();

		int prompt_begin = contents.lastIndexOf(prompt, pos) + prompt.length();
		int line_begin = contents.lastIndexOf("\n");
		int line_end = contents.length();

		if (isCursorInEvaluable()) {
			return (contents.substring(line_begin > prompt_begin ? line_begin: prompt_begin, line_end));
		}
		else {
			return (contents.substring(sel_begin, sel_end));
		} 
	}

	// ------------------------------------------------------------
	// isCursorInEvaluable() - is cursor in the area where an "Enter"
	// will cause the expression to be evaluated? Cursor in other 
	// lines won't be evaluated - they will be yanked down to the 
	// evaluate area for evaluation or editing.
	// ------------------------------------------------------------
	public boolean isCursorInEvaluable () {
		String contents = this.getText().toString();
		int cur_pos = this.getSelectionStart();
		int prompt_pos = contents.indexOf(prompt, cur_pos);
		if (prompt_pos == -1) {
			return true;
		}
		else {
			return false;
		}
	}
}
