package my.kotatsu.ndk_practice2;

import android.os.Bundle;
import android.app.Activity;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //boolean array
        boolean[] a={true,false,true};
        arrayBoolean(a);

        //byte array
        byte[] b={0x00,0x10,0x7f};
        arrayByte(b);

        //byte char
        char[] c={'A','9','あ'};
        arrayChar(c);

        //byte short
        short[] d={1,-32768,32767};
        arrayShort(d);

        //byte int
        int[] e={0,-2147483648,2147483647};
        arrayInt(e);

        //byte long
        long[] f={0,-9223372036854775808L,9223372036854775807L};
        arrayLong(f);

        //byte float
        float[] g={0,-0.0000001f,0.000001f};
        arrayFloat(g);

        //byte double
        double[] h={0,-0.0000001d,0.000001d};
        arrayDouble(h);

        TextView  tv = (TextView) findViewById(R.id.tv1);
        tv.setText( "Array Test" );

    }

    public native void arrayBoolean(boolean[] a);
    public native void arrayByte(byte[] a);
    public native void arrayChar(char[] a);
    public native void arrayShort(short[] a);
    public native void arrayInt(int[] a);
    public native void arrayLong(long[] a);
    public native void arrayFloat(float[] a);
    public native void arrayDouble(double[] a);

    static {
        System.loadLibrary("ndk_practice");
    }

}
