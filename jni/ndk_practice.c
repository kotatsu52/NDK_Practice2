#include <string.h>
#include <jni.h>
#include <android/log.h>

char TAG[]="NDK_PRACTICE2";

// boolean array
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayBoolean( JNIEnv* env, jobject thiz, jbooleanArray jarraybool )
{
	int i;
	int len;
	jboolean *array;

	// 配列変換
	array = (*env)->GetBooleanArrayElements(env, jarraybool, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarraybool);
	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"boolanArray[%d]:%d",i,array[i]);
	}
	// 解放
	(*env)->ReleaseBooleanArrayElements( env, jarraybool, array, 0);

}

// byte array
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayByte( JNIEnv* env, jobject thiz, jbyteArray jarraybyte )
{
	int i;
	int len;
	jbyte *array;

	// 配列変換
	array = (*env)->GetByteArrayElements(env, jarraybyte, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarraybyte);
	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"byteArray[%d]:%x",i,array[i]);
	}
	// 解放
	(*env)->ReleaseByteArrayElements( env, jarraybyte, array, 0);

}

// char array
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayChar( JNIEnv* env, jobject thiz, jcharArray jarraychar )
{
	int i;
	int len;
	jchar *array;

	// javaのcharは2byte,Cのcharは1byteなので下位1byteのみになる
	// 配列変換
	array = (*env)->GetCharArrayElements(env, jarraychar, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarraychar);
	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"charArray[%d]:%c",i,array[i]);
	}
	// 解放
	(*env)->ReleaseCharArrayElements( env, jarraychar, array, 0);

}

// short array
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayShort( JNIEnv* env, jobject thiz, jshortArray jarrayshort )
{
	int i;
	int len;
	jshort *array;

	// 配列変換
	array = (*env)->GetShortArrayElements(env, jarrayshort, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarrayshort);
	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"shortArray[%d]:%d",i,array[i]);
	}
	// 解放
	(*env)->ReleaseShortArrayElements( env, jarrayshort, array, 0);

}

// int array
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayInt( JNIEnv* env, jobject thiz, jintArray jarrayint )
{
	int i;
	int len;
	jint *array;

	// 配列変換
	array = (*env)->GetIntArrayElements(env, jarrayint, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarrayint);
	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"intArray[%d]:%d",i,array[i]);
	}
	// 解放
	(*env)->ReleaseIntArrayElements( env, jarrayint, array, 0);

}
// int long
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayLong( JNIEnv* env, jobject thiz, jlongArray jarraylong )
{
	int i;
	int len;
	jlong *array;

	// javaのlongは8byte,NDKのlongは4byteなので下位4byteのみになる
	// 配列変換
	array = (*env)->GetLongArrayElements(env, jarraylong, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarraylong);

	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"longArray[%d]:%ld",i,array[i]);
	}
	// 解放
	(*env)->ReleaseLongArrayElements( env, jarraylong, array, 0);

}
// int float
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayFloat( JNIEnv* env, jobject thiz, jlongArray jarrayfloat )
{
	int i;
	int len;
	jfloat *array;

	// 配列変換
	array = (*env)->GetFloatArrayElements(env, jarrayfloat, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarrayfloat);

	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"floatArray[%d]:%0.38f",i,array[i]);
	}
	// 解放
	(*env)->ReleaseFloatArrayElements( env, jarrayfloat, array, 0);

}
// int double
void
Java_my_kotatsu_ndk_1practice2_MainActivity_arrayDouble( JNIEnv* env, jobject thiz, jlongArray jarraydouble )
{
	int i;
	int len;
	jdouble *array;

	// 配列変換
	array = (*env)->GetDoubleArrayElements(env, jarraydouble, 0);
	// 配列の要素数取得
	len = (*env)->GetArrayLength(env, jarraydouble);

	// 要素数分ループ
	for(i=0;i<len;i++){
		//ログ出力
		__android_log_print(ANDROID_LOG_DEBUG,TAG,"doubleArray[%d]:%0.38f",i,array[i]);
	}
	// 解放
	(*env)->ReleaseDoubleArrayElements( env, jarraydouble, array, 0);

}
