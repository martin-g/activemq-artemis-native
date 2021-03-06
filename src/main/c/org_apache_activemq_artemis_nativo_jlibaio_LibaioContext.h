/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_activemq_artemis_nativo_jlibaio_LibaioContext */

#ifndef _Included_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
#define _Included_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
#ifdef __cplusplus
extern "C" {
#endif
#undef org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_EXPECTED_NATIVE_VERSION
#define org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_EXPECTED_NATIVE_VERSION 10L
/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    shutdownHook
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_shutdownHook
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    setForceSyscall
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_setForceSyscall
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    isForceSyscall
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_isForceSyscall
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    newContext
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_newContext
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    deleteContext
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_deleteContext
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    open
 * Signature: (Ljava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_open
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    newAlignedBuffer
 * Signature: (II)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_newAlignedBuffer
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    freeBuffer
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_freeBuffer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    submitWrite
 * Signature: (ILjava/nio/ByteBuffer;JILjava/nio/ByteBuffer;Lorg/apache/activemq/artemis/nativo/jlibaio/SubmitInfo;)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_submitWrite
  (JNIEnv *, jobject, jint, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    submitRead
 * Signature: (ILjava/nio/ByteBuffer;JILjava/nio/ByteBuffer;Lorg/apache/activemq/artemis/nativo/jlibaio/SubmitInfo;)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_submitRead
  (JNIEnv *, jobject, jint, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    poll
 * Signature: (Ljava/nio/ByteBuffer;[Lorg/apache/activemq/artemis/nativo/jlibaio/SubmitInfo;II)I
 */
JNIEXPORT jint JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_poll
  (JNIEnv *, jobject, jobject, jobjectArray, jint, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    blockedPoll
 * Signature: (Ljava/nio/ByteBuffer;Z)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_blockedPoll
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    getNativeVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_getNativeVersion
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    lock
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_lock
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    memsetBuffer
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_memsetBuffer
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    getSize
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_getSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    getBlockSizeFD
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_getBlockSizeFD
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    getBlockSize
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_getBlockSize
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    fallocate
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_fallocate
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    fill
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_fill
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_apache_activemq_artemis_nativo_jlibaio_LibaioContext
 * Method:    writeInternal
 * Signature: (IJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_apache_activemq_artemis_nativo_jlibaio_LibaioContext_writeInternal
  (JNIEnv *, jclass, jint, jlong, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
