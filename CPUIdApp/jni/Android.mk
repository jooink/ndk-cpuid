LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := cpuid
LOCAL_LDLIBS := -llog  -lc -landroid
LOCAL_SRC_FILES := com_jooink_experiments_android_ndk_cpuid_CPUIdApp.c
include $(BUILD_SHARED_LIBRARY)
