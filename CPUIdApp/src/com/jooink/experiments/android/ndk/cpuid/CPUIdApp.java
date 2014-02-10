package com.jooink.experiments.android.ndk.cpuid;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class CPUIdApp extends Activity
{  
	/** Called when the activity is first created. */
	@Override
	public void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		//setContentView(R.layout.main);
		TextView tv = new TextView(this);
		tv.setText(cpuid_get());
		setContentView(tv); 
   
	}

	private static native String cpuid_get();
	static {
		System.loadLibrary("cpuid");
	}

}
