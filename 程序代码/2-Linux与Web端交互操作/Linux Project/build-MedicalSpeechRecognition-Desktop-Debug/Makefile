#############################################################################
# Makefile for building: MedicalSpeechRecognition
# Generated by qmake (2.01a) (Qt 4.8.7) on: ?? 5? 10 16:19:01 2017
# Project:  ../MedicalSpeechRecognition/MedicalSpeechRecognition.pro
# Template: app
# Command: /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../MedicalSpeechRecognition/MedicalSpeechRecognition.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I../MedicalSpeechRecognition -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I../MedicalSpeechRecognition/lib/pi -I. -I. -I../MedicalSpeechRecognition -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib/arm-linux-gnueabihf -L/home/leafspace/桌面/Linux\ Project/MedicalSpeechRecognition/lib/pi/ -lmsc -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../MedicalSpeechRecognition/main.cpp \
		../MedicalSpeechRecognition/mainwindow.cpp \
		../MedicalSpeechRecognition/graph.cpp \
		../MedicalSpeechRecognition/playaudio.cpp \
		../MedicalSpeechRecognition/readaudio.cpp \
		../MedicalSpeechRecognition/recognitiononline.cpp \
		../MedicalSpeechRecognition/voice.cpp \
		../MedicalSpeechRecognition/socket.cpp \
		../MedicalSpeechRecognition/uploadingresult.cpp moc_mainwindow.cpp \
		moc_graph.cpp \
		moc_playaudio.cpp \
		moc_readaudio.cpp \
		moc_uploadingresult.cpp
OBJECTS       = main.o \
		mainwindow.o \
		graph.o \
		playaudio.o \
		readaudio.o \
		recognitiononline.o \
		voice.o \
		socket.o \
		uploadingresult.o \
		moc_mainwindow.o \
		moc_graph.o \
		moc_playaudio.o \
		moc_readaudio.o \
		moc_uploadingresult.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		../MedicalSpeechRecognition/MedicalSpeechRecognition.pro
QMAKE_TARGET  = MedicalSpeechRecognition
DESTDIR       = 
TARGET        = MedicalSpeechRecognition

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../MedicalSpeechRecognition/MedicalSpeechRecognition.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/arm-linux-gnueabihf/libQtGui.prl \
		/usr/lib/arm-linux-gnueabihf/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../MedicalSpeechRecognition/MedicalSpeechRecognition.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/arm-linux-gnueabihf/libQtGui.prl:
/usr/lib/arm-linux-gnueabihf/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile ../MedicalSpeechRecognition/MedicalSpeechRecognition.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/MedicalSpeechRecognition1.0.0 || $(MKDIR) .tmp/MedicalSpeechRecognition1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/MedicalSpeechRecognition1.0.0/ && $(COPY_FILE) --parents ../MedicalSpeechRecognition/mainwindow.h ../MedicalSpeechRecognition/graph.h ../MedicalSpeechRecognition/playaudio.h ../MedicalSpeechRecognition/readaudio.h ../MedicalSpeechRecognition/recognitiononline.h ../MedicalSpeechRecognition/voice.h ../MedicalSpeechRecognition/xfMSC/msp_cmn.h ../MedicalSpeechRecognition/xfMSC/msp_errors.h ../MedicalSpeechRecognition/xfMSC/msp_types.h ../MedicalSpeechRecognition/xfMSC/qisr.h ../MedicalSpeechRecognition/xfMSC/qtts.h ../MedicalSpeechRecognition/MessageToServer.h ../MedicalSpeechRecognition/uploadingresult.h ../MedicalSpeechRecognition/socket.h .tmp/MedicalSpeechRecognition1.0.0/ && $(COPY_FILE) --parents ../MedicalSpeechRecognition/main.cpp ../MedicalSpeechRecognition/mainwindow.cpp ../MedicalSpeechRecognition/graph.cpp ../MedicalSpeechRecognition/playaudio.cpp ../MedicalSpeechRecognition/readaudio.cpp ../MedicalSpeechRecognition/recognitiononline.cpp ../MedicalSpeechRecognition/voice.cpp ../MedicalSpeechRecognition/socket.cpp ../MedicalSpeechRecognition/uploadingresult.cpp .tmp/MedicalSpeechRecognition1.0.0/ && $(COPY_FILE) --parents ../MedicalSpeechRecognition/mainwindow.ui .tmp/MedicalSpeechRecognition1.0.0/ && (cd `dirname .tmp/MedicalSpeechRecognition1.0.0` && $(TAR) MedicalSpeechRecognition1.0.0.tar MedicalSpeechRecognition1.0.0 && $(COMPRESS) MedicalSpeechRecognition1.0.0.tar) && $(MOVE) `dirname .tmp/MedicalSpeechRecognition1.0.0`/MedicalSpeechRecognition1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/MedicalSpeechRecognition1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_graph.cpp moc_playaudio.cpp moc_readaudio.cpp moc_uploadingresult.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_graph.cpp moc_playaudio.cpp moc_readaudio.cpp moc_uploadingresult.cpp
moc_mainwindow.cpp: ../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/readaudio.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/playaudio.h \
		../MedicalSpeechRecognition/uploadingresult.h \
		../MedicalSpeechRecognition/recognitiononline.h \
		../MedicalSpeechRecognition/xfMSC/qisr.h \
		../MedicalSpeechRecognition/xfMSC/msp_types.h \
		../MedicalSpeechRecognition/xfMSC/msp_cmn.h \
		../MedicalSpeechRecognition/xfMSC/msp_errors.h \
		../MedicalSpeechRecognition/mainwindow.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) ../MedicalSpeechRecognition/mainwindow.h -o moc_mainwindow.cpp

moc_graph.cpp: ../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/graph.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) ../MedicalSpeechRecognition/graph.h -o moc_graph.cpp

moc_playaudio.cpp: ../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/playaudio.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) ../MedicalSpeechRecognition/playaudio.h -o moc_playaudio.cpp

moc_readaudio.cpp: ../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/readaudio.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) ../MedicalSpeechRecognition/readaudio.h -o moc_readaudio.cpp

moc_uploadingresult.cpp: ../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/uploadingresult.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/moc $(DEFINES) $(INCPATH) ../MedicalSpeechRecognition/uploadingresult.h -o moc_uploadingresult.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: ../MedicalSpeechRecognition/mainwindow.ui \
		../MedicalSpeechRecognition/graph.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	/usr/lib/arm-linux-gnueabihf/qt4/bin/uic ../MedicalSpeechRecognition/mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: ../MedicalSpeechRecognition/main.cpp ../MedicalSpeechRecognition/mainwindow.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/readaudio.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/playaudio.h \
		../MedicalSpeechRecognition/uploadingresult.h \
		../MedicalSpeechRecognition/recognitiononline.h \
		../MedicalSpeechRecognition/xfMSC/qisr.h \
		../MedicalSpeechRecognition/xfMSC/msp_types.h \
		../MedicalSpeechRecognition/xfMSC/msp_cmn.h \
		../MedicalSpeechRecognition/xfMSC/msp_errors.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../MedicalSpeechRecognition/main.cpp

mainwindow.o: ../MedicalSpeechRecognition/mainwindow.cpp ../MedicalSpeechRecognition/mainwindow.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/readaudio.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/playaudio.h \
		../MedicalSpeechRecognition/uploadingresult.h \
		../MedicalSpeechRecognition/recognitiononline.h \
		../MedicalSpeechRecognition/xfMSC/qisr.h \
		../MedicalSpeechRecognition/xfMSC/msp_types.h \
		../MedicalSpeechRecognition/xfMSC/msp_cmn.h \
		../MedicalSpeechRecognition/xfMSC/msp_errors.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../MedicalSpeechRecognition/mainwindow.cpp

graph.o: ../MedicalSpeechRecognition/graph.cpp ../MedicalSpeechRecognition/graph.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o graph.o ../MedicalSpeechRecognition/graph.cpp

playaudio.o: ../MedicalSpeechRecognition/playaudio.cpp ../MedicalSpeechRecognition/playaudio.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o playaudio.o ../MedicalSpeechRecognition/playaudio.cpp

readaudio.o: ../MedicalSpeechRecognition/readaudio.cpp ../MedicalSpeechRecognition/readaudio.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o readaudio.o ../MedicalSpeechRecognition/readaudio.cpp

recognitiononline.o: ../MedicalSpeechRecognition/recognitiononline.cpp ../MedicalSpeechRecognition/recognitiononline.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h \
		../MedicalSpeechRecognition/xfMSC/qisr.h \
		../MedicalSpeechRecognition/xfMSC/msp_types.h \
		../MedicalSpeechRecognition/xfMSC/msp_cmn.h \
		../MedicalSpeechRecognition/xfMSC/msp_errors.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o recognitiononline.o ../MedicalSpeechRecognition/recognitiononline.cpp

voice.o: ../MedicalSpeechRecognition/voice.cpp ../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o voice.o ../MedicalSpeechRecognition/voice.cpp

socket.o: ../MedicalSpeechRecognition/socket.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o socket.o ../MedicalSpeechRecognition/socket.cpp

uploadingresult.o: ../MedicalSpeechRecognition/uploadingresult.cpp ../MedicalSpeechRecognition/uploadingresult.h \
		../MedicalSpeechRecognition/voice.h \
		../MedicalSpeechRecognition/socket.h \
		../MedicalSpeechRecognition/Queuedatastruts.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o uploadingresult.o ../MedicalSpeechRecognition/uploadingresult.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_graph.o: moc_graph.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_graph.o moc_graph.cpp

moc_playaudio.o: moc_playaudio.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_playaudio.o moc_playaudio.cpp

moc_readaudio.o: moc_readaudio.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_readaudio.o moc_readaudio.cpp

moc_uploadingresult.o: moc_uploadingresult.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_uploadingresult.o moc_uploadingresult.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

