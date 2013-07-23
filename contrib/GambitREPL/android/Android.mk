# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

CC := gcc-4.2
LOCAL_MODULE    := gambit

# Note the inclusion of the incremental link file, which I think by 
# default is the last file compiled by gsc in batch mode
# with -link specified

LOCAL_C_INCLUDES := $(LOCAL_PATH)/gambit-android/include/

LOCAL_SRC_FILES := gambit-android-jni.c digest.c genport.c help.c html.c intf.c json.c repl-server.c repo.c script.c tar.c url.c wiki.c zlib.c program.c program_.c
LOCAL_CFLAGS :=  -I./depends -fno-short-enums
LOCAL_LDLIBS := -ldl -fno-short-enums -lc -L$(LOCAL_PATH)/gambit-android/lib -lgambc -llog

include $(BUILD_SHARED_LIBRARY)
