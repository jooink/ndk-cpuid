#include <cpuid.h>
#include <stdio.h>
#include <stdlib.h>
#include "com_jooink_experiments_android_ndk_cpuid_CPUIdApp.h"

/*extern void  cpuid(unsigned info, unsigned *eax, unsigned *ebx, unsigned *ecx, unsigned *edx);
 */

JNIEXPORT jstring JNICALL Java_com_jooink_experiments_android_ndk_cpuid_CPUIdApp_cpuid_1get(JNIEnv *env, jclass jc) {

  char buf[1024];
  char buft[128];
  unsigned int eax, ebx, ecx, edx;
  int i;
  
  sprintf(buf,"CPUID:\n");
  for (i = 0; i < 6; ++i) {
    __get_cpuid(i, &eax, &ebx, &ecx, &edx);
    sprintf(buft,"eax=%i: %#010x %#010x %#010x %#010x\n", 
	    i, eax, ebx, ecx, edx);
    strcat(buf,buft);
  }
  
  return (*env)->NewStringUTF(env,buf);
}


