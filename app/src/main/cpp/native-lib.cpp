#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_lab3_1java_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "使用NDK形成的效果";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_lab3_1java_MainActivity_intFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement intFromJNI()
    return 1314;
}