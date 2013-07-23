// ------------------------------------------------------------
//    Gambit for Android
//
//    CrashHandler.java - do some simple reporting in the event 
//                        of crash in native code
//
//	  Copyright (c) by Keith Flower, 2011
//
//    Some of the following is based on code kindly made 
//    publicly available by Chris Boyle: http://chris.boyle.name/
//
// ------------------------------------------------------------

package org.keithflower.gambit;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import java.io.IOException;
import java.text.MessageFormat;

public class CrashHandler extends Activity {

	protected void onCreate(Bundle state) {
		super.onCreate(state);
		setTitle(R.string.crashtitle);
		setContentView(R.layout.crashhandler);
		final Button b = (Button)findViewById(R.id.report),
				c = (Button)findViewById(R.id.close);
		b.setOnClickListener(new View.OnClickListener(){public void onClick(View v){
			final ProgressDialog progress = new ProgressDialog(CrashHandler.this);
			progress.setMessage(getString(R.string.getting_log));
			progress.setIndeterminate(true);
			progress.setCancelable(false);
			progress.show();
			final AsyncTask<Void, Void, Void> task = new AsyncTask<Void,Void,Void>(){
				String log;
				Process process;
				@Override
				protected Void doInBackground(Void... v) {
					try {
						process = Runtime.getRuntime().exec(new String[]{"logcat","-d","-v","long"});
						log = Gui.readAllOf(process.getInputStream());

					} catch (IOException e) {
						e.printStackTrace();
						Toast.makeText(CrashHandler.this, e.toString(), Toast.LENGTH_LONG).show();
					}
					return null;
				}
				@Override
				protected void onCancelled() {
					process.destroy();
				}
				@Override
				protected void onPostExecute(Void v) {
					progress.setMessage(getString(R.string.starting_email));
					boolean ok = Gui.tryEmailAuthor(CrashHandler.this, true,
							getString(R.string.crash_preamble)+"\n\n\n\nLog:\n"+log);
					progress.dismiss();
					if (ok) {
						finish();
					}
				}
			}.execute();
			b.postDelayed(new Runnable(){public void run(){
				if (task.getStatus() == AsyncTask.Status.FINISHED) return;
				progress.dismiss();
				task.cancel(true);
				new AlertDialog.Builder(CrashHandler.this)
				.setMessage(MessageFormat.format(getString(R.string.get_log_failed), getString(R.string.author_email)))
				.setCancelable(true)
				.setIcon(android.R.drawable.ic_dialog_alert)
				.show();
			}}, 12000);
		}});
		c.setOnClickListener(new View.OnClickListener(){public void onClick(View v){
			finish();
		}});
	}

}

