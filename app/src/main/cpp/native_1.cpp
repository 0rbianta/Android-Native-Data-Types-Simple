#include <jni.h>
#include <string>

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIString(JNIEnv* env, jobject, jstring data) {
    string data_cpp = env->GetStringUTFChars(data,0);

    data_cpp+=" world!";

    return env->NewStringUTF(data_cpp.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIint(JNIEnv *env, jobject thiz, jint data_int) {
    // TODO: implement JNIint()


    data_int+=1;

    return data_int;

}

extern "C"
JNIEXPORT jfloat JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIFloat(JNIEnv *env, jobject thiz, jfloat data_float) {
    // TODO: implement JNIFloat()

    float float_cpp = data_float;
    float_cpp+=1;

    return float_cpp;

}extern "C"
JNIEXPORT jdouble JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIDouble(JNIEnv *env, jobject thiz, jdouble data_double) {
    // TODO: implement JNIDouble()

    double data_cpp = data_double;

    data_cpp+=10;

    return data_cpp;

}

extern "C"
JNIEXPORT jboolean JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIBoolean(JNIEnv *env, jobject thiz, jboolean data_bool) {
    // TODO: implement JNIBoolean()

    bool data_cpp = data_bool;

    if(data_cpp){
        data_cpp=false;
    }

    return data_cpp;

}

extern "C"
JNIEXPORT jchar JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIChar(JNIEnv *env, jobject thiz, jchar data_char) {
    // TODO: implement JNIChar()

    char data_cpp = data_char;

    return data_cpp;

}extern "C"
JNIEXPORT jshort JNICALL
Java_com_example_data_1types_1native_MainActivity_JNIShort(JNIEnv *env, jobject thiz, jshort data_short) {
    // TODO: implement JNIShort()

    short data_cpp = data_short;

    return data_cpp;

}
