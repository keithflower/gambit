/*
 * Gambit for Android
 *
 * Java-Native Interface
 *
 * Copyright (c) Keith Flower, 2011 - 2013.
 *
 */

#define ___VERSION 407000

#include <string.h>
#include <jni.h>
#include <stdio.h>
#include <signal.h>
#include "gambit.h"
#include <android/log.h>

/* ___setup uses the following to know who to call to initialize */
#define LINKER ____20_program__

___BEGIN_C_LINKAGE
extern ___mod_or_lnk LINKER (___global_state_struct*);
___END_C_LINKAGE

void ___cleanup ();
void alog (char *);
void start_repl_server(char *);
void setcwd(const char *s);
void send_input(const char *s);
void sendevent(const char *s);
void java_add_input_to_textview(int i, char *s);
void java_add_output_to_textview(int i, char *s);
void java_set_webView_content (int i, char *s, char *base_url_path, int b, char *mime_type);
void java_set_webView_content_from_file (int i, char *s, char *base_url_path, int b, char *mime_type);
void java_open_URL (char *s);
void java_show_textView ();
void java_show_webView ();
void java_native_signal_action ();
void java_set_pref (char *key, char *value);
void java_add_expr (char *expr);
void java_popup_alert (char *s1, char *s2, char *s3, char *s4);
void java_segm_ctrl_set_title (int i, char *s);
void java_hide_cancelButton ();
void java_show_cancelButton ();
void java_set_navigation (int i);
void java_show_textView (int i);

char *getinput();
double heartbeat();

const char *java_get_pasteboard ();
const char *java_get_pref (char *key);
const char *java_eval_js_in_webView (int i, char *key);

static JavaVM *gJvm;
static jobject gObj;   
static jstring jgStrLock;

static void logv(char *msg) {
  __android_log_print (ANDROID_LOG_VERBOSE, "android_gambit_native", msg);
}

static void vlogv(const char *format, ...) {
  char    *tag   = "Gambit for Android";
  int      level = ANDROID_LOG_VERBOSE;
  va_list  arglist;
  va_start(arglist, format);
  __android_log_vprint(level, tag, format, arglist);
  va_end(arglist);
}

void Java_org_keithflower_gambit_Gui_startReplServer(JNIEnv *xenv, jobject obj)
{
  // TODO - this was previously used to start repl server
  // from a menu item - this may not be desirable, and is
  // currently handled in both iOS and android by starting
  // repl server from repl only.
  start_repl_server("password goes here");
}

void Java_org_keithflower_gambit_Gui_heartbeat(JNIEnv *env, jobject obj)
{
  if ((*env)->MonitorEnter(env, jgStrLock) != JNI_OK) 
    logv("heartbeat: monitor enter NOT OK");
  heartbeat();
  (*env)->MonitorExit(env, jgStrLock);
}

void Java_org_keithflower_gambit_Gui_reloadWebview(JNIEnv *xenv, jobject obj)
{
  // removed implementation
  // reloadwebview();
}

void Java_org_keithflower_gambit_Gui_addinput(JNIEnv *env, jobject obj, jstring j_input) {
   if ((*env)->MonitorEnter(env, jgStrLock) != JNI_OK) 
     logv("addinput: monitor enter NOT OK");
   const char *input = (*env)->GetStringUTFChars(env, j_input, 0);
   send_input(input);
   (*env)->ReleaseStringUTFChars(env, j_input, input);
   (*env)->MonitorExit(env, jgStrLock);
}

void Java_org_keithflower_gambit_Gui_setcwd(JNIEnv *env, jobject obj, jstring j_dir) {
  if ((*env)->MonitorEnter(env, jgStrLock) != JNI_OK) 
    logv("setcwd: monitor enter NOT OK");
  const char *dir = (*env)->GetStringUTFChars(env, j_dir, 0);
  setcwd(dir);
  (*env)->ReleaseStringUTFChars(env, j_dir, dir);
  (*env)->MonitorExit(env, jgStrLock);
}

void Java_org_keithflower_gambit_Gui_sendevent(JNIEnv *env, jobject obj, jstring j_event) {
  if ((*env)->MonitorEnter(env, jgStrLock) != JNI_OK) 
    logv("sendevent: monitor enter NOT OK");
  const char *event = (*env)->GetStringUTFChars(env, j_event, 0);
  sendevent(event);
  (*env)->ReleaseStringUTFChars(env, j_event, event);
  (*env)->MonitorExit(env, jgStrLock);
}

void Java_org_keithflower_gambit_Gui_initGambit(JNIEnv *env, jobject obj)
{
  int debug_settings = ___DEBUG_SETTINGS_INITIAL;
  // The iOS version seems to expect that resources like the .html
  // help files are installed in a directory, whereas in Android I 
  // package these as 'assets'. To minimize changes in the scheme
  // code, just indicate that the installation directory is the
  // current directory. 
  char *main_argv[] = {"."};
  ___UCS_2 ucs2_gambcdir[1024];
  ___UCS_2STRING *ucs2_argv;
  int last_dir_sep;
  int i;
logv("init 1");

  if (___NONNULLCHARSTRINGLIST_to_NONNULLUCS_2STRINGLIST
        (main_argv,
         &ucs2_argv)
      != ___FIX(___NO_ERR))
    exit(1);
logv("init 1");

  last_dir_sep = 0;
  i = 0;

  while (ucs2_argv[0][i] != '\0')
    {
      if (ucs2_argv[0][i] == '/')
        last_dir_sep = i;
      i++;
    }
logv("init 1");

  for (i=0; i<last_dir_sep; i++)
    ucs2_gambcdir[i] = ucs2_argv[0][i];

  ucs2_gambcdir[i] = '\0';

  debug_settings =
    (debug_settings
     & ~___DEBUG_SETTINGS_UNCAUGHT_MASK)
    | (___DEBUG_SETTINGS_UNCAUGHT_ALL
       << ___DEBUG_SETTINGS_UNCAUGHT_SHIFT);

  debug_settings =
    (debug_settings
     & ~___DEBUG_SETTINGS_ERROR_MASK)
    | (___DEBUG_SETTINGS_ERROR_REPL
       << ___DEBUG_SETTINGS_ERROR_SHIFT);

  ___setup_params_struct setup_params;
logv("init 1");

  ___setup_params_reset (&setup_params);
  setup_params.version = ___VERSION;
  setup_params.gambcdir = ucs2_gambcdir;
  setup_params.linker = LINKER;
  setup_params.debug_settings = debug_settings;
  ___setup(&setup_params);
  //___disable_heartbeat_interrupts ();

  gObj = (*env)->NewGlobalRef(env, obj);

  //gObj = obj;
}

void Java_org_keithflower_gambit_Gui_cleanupGambit(JNIEnv *xenv, jobject obj) {
  ___cleanup ();
}

void alog (char *s) {
  logv(s);
}

void java_add_output_to_textview (int i, char *s) {
  //TODO view index i not implemented
  jstring js; 
  JNIEnv *env;

  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "addOutputToTextView", "(Ljava/lang/String;)V"); 
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, js);
}

void java_add_input_to_textview (int i, char *s) {
  //TODO view index i not implemented
  jstring js; 
  JNIEnv *env;

  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "addInputToTextView", "(Ljava/lang/String;)V"); 
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, js);
}

void java_segm_ctrl_set_title (int i, char *s) {

  jint    ji = 0;
  jstring js; 
  JNIEnv *env;
  
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "segmCtrlSetTitle", "(ILjava/lang/String;)V"); 
  
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji, js); 
}

void java_set_webView_content (int i, char *s, char *base_url_path, int b, char *mime_type) {
// TODO - optional params base_url_path and boolean b; and mime_type are currently not being used
  jint ji = i;
  jstring js; 
  JNIEnv *env;
  
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setWebViewContent", "(ILjava/lang/String;)V"); 
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji, js); 
}

void java_set_webView_content_from_file (int i, char *s, char *bse_url_path, int b, char *mime_type) {
// TODO - optional params base_url_path and boolean b; and mime_type are currently not being used
  jint ji = i;
  jstring js; 
  JNIEnv *env;
  
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setWebViewContentFromFile", "(ILjava/lang/String;)V"); 
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji, js); 
}

void java_open_URL (char *s) {

  jstring js; 
  JNIEnv *env;

  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "openURL", "(Ljava/lang/String;)V"); 
  if (mid == 0) 
    return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, js); 
}

void java_add_expr (char *s) {

  jstring js; 
  JNIEnv *env;

  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js = (*env)->NewStringUTF(env, s); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "addexpr", "(Ljava/lang/String;)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, js); 
}

void java_show_ReplView () {

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "showReplView", "()V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid); 
}

void java_show_webView (int i) {

  jint ji = i;
  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "showWebView", "(I)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji); 
}

void java_hide_cancelButton () {

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetMethodID(env, cls, "hideCancelButton", "()V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallVoidMethod(env, gObj, mid); 
}

void java_show_cancelButton () {

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetMethodID(env, cls, "showCancelButton", "()V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallVoidMethod(env, gObj, mid); 
}

void java_show_textView (int i) {

  jint ji = 0;
  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "showTextView", "(I)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji); 
}

void java_set_navigation (int i) {

  jint ji = i;
  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setNavigation", "(I)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, ji); 
}

void java_popup_alert (char *s1, char *s2, char *s3, char *s4) {

  jstring   js1; 
  jstring   js2; 
  jstring   js3; 
  jstring   js4; 

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  js1 = (*env)->NewStringUTF(env, s1); 
  js2 = (*env)->NewStringUTF(env, s2); 
  js3 = (*env)->NewStringUTF(env, s3); 
  js4 = (*env)->NewStringUTF(env, s4); 

  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setPref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, js1, js2, js3, js4); 
}

void java_set_pref (char *key, char *value) {

  jstring   jsKey; 
  jstring   jsValue; 

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jsKey = (*env)->NewStringUTF(env, key); 
  jsValue = (*env)->NewStringUTF(env, value); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "setPref", "(Ljava/lang/String;Ljava/lang/String;)V"); 
  if (mid == 0) 
	  return; 
  (*env)->CallStaticVoidMethod(env, cls, mid, jsKey, jsValue); 
}

const char * java_get_pref (char *key) {

  jstring   jsKey; 
  jstring   jsValue; 

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jsKey = (*env)->NewStringUTF(env, key); 
  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "getPref", "(Ljava/lang/String;)Ljava/lang/String;"); 
  if (mid == 0) 
    return; 
  jsValue = (*env)->CallStaticObjectMethod(env, cls, mid, jsKey); 
  // To match original gambit code, null is returned if value not found for key
  if (jsValue) {
    const char *value = (*env)->GetStringUTFChars(env, jsValue, 0);
    return (value);
  }
  else {
    return ((char *) 0);
  }
}

const char * java_eval_js_in_webView(int i, char *key) {

  jint      ji = 0; // TODO implement
  jstring   jsKey; 
  jstring   jsValue; 
  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 
  jsKey = (*env)->NewStringUTF(env, key); 
  jmethodID mid = (*env)->GetMethodID(env, cls, "evalJSInWebView", "(ILjava/lang/String;)Ljava/lang/String;"); 
  if (mid == 0) 
    return; 
  jsValue = (*env)->CallObjectMethod(env, gObj, mid, ji, jsKey); 
  
  if (jsValue) {
    const char *value = (*env)->GetStringUTFChars(env, jsValue, 0);
    return (value);
  }
  else {
    return ((char *) 0);
  }
}

const char * java_get_pasteboard () {

  jstring   jsValue; 

  JNIEnv *env;
  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);

  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  if (cls == 0) 
    return; 

  jmethodID mid = (*env)->GetStaticMethodID(env, cls, "getPref", "()Ljava/lang/String;"); 
  if (mid == 0) 
    return; 
  jsValue = (*env)->CallStaticObjectMethod(env, cls, mid); 

  if (jsValue) {
    const char *value = (*env)->GetStringUTFChars(env, jsValue, 0);
    return (value);
  }
  else {
    return ((char *) 0);
  }
}

static struct sigaction old_sigs[NSIG];

void java_native_signal_action (int signal, siginfo_t *info, void *reserved) {
  JNIEnv *env;

  (*gJvm)->AttachCurrentThread(gJvm, (const struct JNINativeInterface ***)&env, NULL);
  jclass cls = (*env)->FindClass(env, "org/keithflower/gambit/Gui"); 
  (*env)->CallVoidMethod(env, gObj, (*env)->GetMethodID(env, cls, "nativeCrash", "()V"));
  old_sigs[signal].sa_handler(signal);
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved) {
  jclass cls;
  JNIEnv *env;
  
  gJvm = jvm;  // cache the JavaVM pointer

  if ((*jvm)->GetEnv(jvm, (void **)&env, JNI_VERSION_1_2)) {
    return JNI_ERR; // JNI version not supported 
  }

  // Set handler that tries to deal with any crashes in native code.
  struct sigaction handler;
  memset(&handler, 0, sizeof(sigaction));
  handler.sa_sigaction = java_native_signal_action;
  handler.sa_flags = SA_RESETHAND;
  sigaction(SIGILL, &handler, &old_sigs[SIGILL]);
  sigaction(SIGABRT, &handler, &old_sigs[SIGABRT]);
  sigaction(SIGBUS, &handler, &old_sigs[SIGBUS]);
  sigaction(SIGSEGV, &handler, &old_sigs[SIGSEGV]);

  // The following sets a global object used to synchronize some
  // of the JNI calls into gambit. This approach appears to 
  // eliminate JNI check failures, eg 
  //    W/dalvikvm(  863): JNI WARNING: threadid=19 using env from threadid=3
  //    W/dalvikvm(  863):              in Lorg/keithflower/gambit/Gui;.heartbeat ()V (ReleaseStringUTFChars)
  // However, it may be cleaner ultimately to synchronize those calls 
  // with sync objects within the Java code.
  char lock[]="LOCK";
  jstring jlock = (*env)->NewStringUTF(env, lock);
  jgStrLock = (*env)->NewGlobalRef(env, jlock);

  return JNI_VERSION_1_2;
 }
