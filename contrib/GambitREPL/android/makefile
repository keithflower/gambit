# makefile for Android

herefromroot = contrib/GambitREPL
rootfromhere = ../../..
srcdirpfx = 

# Set the path to the root of your Android Native Development Toolkit
NDK_PATH = /Users/keith/android-ndk-r8e

VPATH = ..
CFILES = digest.c genport.c help.c html.c intf.c json.c \
	repl-server.c repo.c script.c tar.c url.c wiki.c zlib.c \
	program.c program_.c

SCMFILES = ../digest#.scm ../digest.scm ../genport#.scm ../genport.scm \
	../help#.scm ../help.scm ../html#.scm ../html.scm intf#.scm \
	intf.scm ../json#.scm ../json.scm program.scm ../repl-server#.scm \
	../repl-server.scm ../repo#.scm ../repo.scm ../script#.scm \
	../script.scm ../tar#.scm ../tar.scm ../url#.scm ../url.scm \
	../wiki#.scm ../wiki.scm ../zlib#.scm ../zlib.scm

OBJPATH = ./obj/local/armeabi/objs/gambit
OBJFILES = digest.o html.o program.o script.o wiki_.o \
	digest.o.d html.o.d program.o.d script.o.d wiki_.o.d \
	gambit-android-jni.o intf.o program_.o tar.o zlib.o \
	gambit-android-jni.o.d intf.o.d program_.o.d tar.o.d zlib.o.d \
	genport.o intf_android.o repl-server.o url.o \
	genport.o.d intf_android.o.d repl-server.o.d url.o.d \
	help.o json.o repo.o wiki.o \
	help.o.d json.o.d repo.o.d wiki.o.d

OBJDPATH = ./obj/local/armeabi/objs-debug/gambit
OBJDFILES = fib.o fib_.o.d program.o program_.o.d test-jni.o.d.org \
	fib.o.d gambit-android-jni.o program.o.d test-jni.o \
	fib_.o gambit-android-jni.o.d program_.o  test-jni.o.d

GAMBIT_ANDROID_LIB = ./gambit-android/lib/libgambc.a

ANDROID_RESOURCE_DIR = ./res
ANDROID_ASSETS_DIR = ./assets

RFILES = ../Icon-72.png ../Icon-Small-50.png ../Icon-Small.png ../Icon-Small@2x.png ../Icon-512.png \
	../Icon.png ../Icon@2x.png ../Icon-unscaled.key ../Icon-unscaled.tiff \
	../Icon-unscaled-alpha.tiff \
	../8ball.png ../edit.png ../f1.png ../f10.png ../f11.png ../f12.png ../f2.png ../f3.png \
	../f4.png ../f5.png ../f6.png ../f7.png ../f8.png ../f9.png ../heart.png ../note.png ../rocket.png \
	../stop.png ../user.png \
	../button-abc.png ../button-cancel.png ../button-compass.png ../button-empty.png \
	../button-left-left.png ../button-left.png ../button-question.png ../button-right-right.png \
	../button-right.png ../button-up.png ../button-up-arrow.png \
	../key-8ball-46x42.png ../key-comma-46x42.png ../key-doublequote-46x42.png \
	../key-edit-46x42.png ../key-empty-46x42.png ../key-f1-46x42.png \
	../key-f10-46x42.png ../key-f11-46x42.png ../key-f12-46x42.png ../key-f2-46x42.png \
	../key-f3-46x42.png ../key-f4-46x42.png ../key-f5-46x42.png ../key-f6-46x42.png \
	../key-f7-46x42.png ../key-f8-46x42.png ../key-f9-46x42.png ../key-heart-46x42.png \
	../key-lambda-46x42.png ../key-lparen-46x42.png ../key-minus-46x42.png \
	../key-note-46x42.png ../key-plus-46x42.png ../key-quote-46x42.png \
	../key-rocket-46x42.png ../key-rparen-46x42.png ../key-sharp-46x42.png \
	../key-star-46x42.png ../key-stop-46x42.png ../key-user-46x42.png \
	../help.html ../r5rs.html ../r5rs.pdf ../gambit-c.html

# Make a debugging version of app
bin/gambit-debug.apk: $(GAMBIT_ANDROID_LIB) $(CFILES) $(ANDROID_RESOURCE_DIR) $(ANDROID_ASSETS_DIR)
	$(NDK_PATH)/ndk-build
	ant debug

android_lib : $(GAMBIT_ANDROID_LIB) $(CFILES)
	../../../bin/gsc-script -:d- -link -o . $(CFILES)

gambit_lib : 
	cd gambit-android && ../build_libgambc

clean:
	rm $(CFILES)
	rm $(OBJPATH)/$(OBJFILES)
	rm $(OBJDPATH)/$(OBJDFILES)
	ant clean

.SUFFIXES : .scm .c 

.scm.c:
	 $(rootfromhere)/gsc/gsc -:~~bin=$(srcdirpfx)$(rootfromhere)/bin,~~lib=$(srcdirpfx)$(rootfromhere)/lib,~~include=$(srcdirpfx)$(rootfromhere)/include -f -c -check -o $*.c $<

program_.c: digest.c genport.c zlib.c tar.c json.c url.c html.c wiki.c repl-server.c intf.c script.c repo.c help.c program.c
	 $(rootfromhere)/gsc/gsc -:~~bin=$(srcdirpfx)$(rootfromhere)/bin,~~lib=$(srcdirpfx)$(rootfromhere)/lib,~~include=$(srcdirpfx)$(rootfromhere)/include -f -link -o $@ $^

$(CANCEL_BUTTON): ../button-cancel.png

# Android needs button images in the res/ directories, and chokes
# on filenames with '-'
$(ANDROID_RESOURCE_DIR) : $(CANCEL_BUTTON)
	cp ../button-cancel.png res/drawable-hdpi/button_cancel.png
	cp ../button-cancel.png res/drawable-mdpi/button_cancel.png
	cp ../button-cancel.png res/drawable-ldpi/button_cancel.png

$(ANDROID_ASSETS_DIR) : $(RFILES)
	mkdir -p assets
	cp $? assets/

gambit-android:
	@echo "*************************************************************"
	@echo "*                                                           *"
	@echo "* Building Gambit for Android                               *"
	@echo "*                                                           *"
	@echo "*   This builds the Gambit runtime library for              *"
	@echo "*   Android devices and simulators                          *"
	@echo "*                                                           *"
	@echo "*************************************************************"
	$(rootfromhere)/misc/build-gambit-android

# ------------------------------------------------------------------------------
# The following are some Android specific tools that I can
# never remember the syntax for:

list_targets:
	android list targets

list_emulators:
	android list avd

# Start the default Android device emulator. You can start a
# different emulator with: 
#	make start_emulator EMULATOR=<your emulator>
EMULATOR = Android1.6Emulator
start_emulator:
	emulator -avd $(EMULATOR) &

emulator_install:
	adb -e uninstall org.keithflower.gambit
	adb install bin/gambit-debug.apk

logcat:
	adb -e logcat
