package com.example.data_types_native;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    //Load C++ lib on start activity
    static {
        System.loadLibrary("native_1");
    }

    private native String JNIString(String data_string);
    private native int JNIint(int data_int);
    private native float JNIFloat(float data_float);
    private native double JNIDouble(double data_double);
    private native boolean JNIBoolean(boolean data_bool);
    private native char JNIChar(char data_char);
    private native short JNIShort(short data_short);

    private TextView debug_string,debug_int,debug_boolean,debug_float,debug_double,debug_char,debug_short;

    private void load_ui_elements(){

        debug_string=findViewById(R.id.debug_string);
        debug_int=findViewById(R.id.debug_int);
        debug_boolean=findViewById(R.id.debug_boolean);
        debug_float=findViewById(R.id.debug_float);
        debug_double=findViewById(R.id.debug_double);
        debug_char=findViewById(R.id.debug_char);
        debug_short=findViewById(R.id.debug_short);

    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        load_ui_elements();

        debug_string.setText(JNIString("Hello"));
        debug_int.setText(String.valueOf(JNIint(100)));
        debug_boolean.setText(String.valueOf(JNIBoolean(true)));
        debug_float.setText(String.valueOf(JNIFloat(22)));
        debug_double.setText(String.valueOf(JNIDouble(9990.0)));
        debug_char.setText(String.valueOf(JNIChar('a')));
        debug_short.setText(String.valueOf(JNIShort((short)20)));

    }


}