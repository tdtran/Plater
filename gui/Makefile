#############################################################################
# Makefile for building: Plater
# Generated by qmake (2.01a) (Qt 4.8.1) on: Sun Jun 1 00:09:55 2014
# Project:  gui.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile gui.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4 -I../plater -I/usr/X11R6/include -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -L/usr/X11R6/lib64 -L/home/gregwar/Plater/gui/../plater/build/ -llibplater -lGLU -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
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

SOURCES       = main.cpp \
		mainwindow.cpp \
		worker.cpp \
		viewer.cpp \
		wizard.cpp \
		platesviewer.cpp \
		about.cpp moc_mainwindow.cpp \
		moc_worker.cpp \
		moc_viewer.cpp \
		moc_wizard.cpp \
		moc_platesviewer.cpp \
		moc_about.cpp \
		qrc_icons.cpp
OBJECTS       = main.o \
		mainwindow.o \
		worker.o \
		viewer.o \
		wizard.o \
		platesviewer.o \
		about.o \
		moc_mainwindow.o \
		moc_worker.o \
		moc_viewer.o \
		moc_wizard.o \
		moc_platesviewer.o \
		moc_about.o \
		qrc_icons.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		gui.pro
QMAKE_TARGET  = Plater
DESTDIR       = 
TARGET        = Plater

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

$(TARGET): /home/gregwar/Plater/gui/../plater/build/liblibplater.a ui_mainwindow.h ui_wizard.h ui_platesviewer.h ui_about.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: gui.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile gui.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile gui.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Plater1.0.0 || $(MKDIR) .tmp/Plater1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Plater1.0.0/ && $(COPY_FILE) --parents mainwindow.h worker.h viewer.h wizard.h platesviewer.h about.h .tmp/Plater1.0.0/ && $(COPY_FILE) --parents icons.qrc .tmp/Plater1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp worker.cpp viewer.cpp wizard.cpp platesviewer.cpp about.cpp .tmp/Plater1.0.0/ && $(COPY_FILE) --parents mainwindow.ui wizard.ui platesviewer.ui about.ui .tmp/Plater1.0.0/ && (cd `dirname .tmp/Plater1.0.0` && $(TAR) Plater1.0.0.tar Plater1.0.0 && $(COMPRESS) Plater1.0.0.tar) && $(MOVE) `dirname .tmp/Plater1.0.0`/Plater1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Plater1.0.0


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

compiler_moc_header_make_all: moc_mainwindow.cpp moc_worker.cpp moc_viewer.cpp moc_wizard.cpp moc_platesviewer.cpp moc_about.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_worker.cpp moc_viewer.cpp moc_wizard.cpp moc_platesviewer.cpp moc_about.cpp
moc_mainwindow.cpp: wizard.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h \
		worker.h \
		../plater/Request.h \
		../plater/Part.h \
		../plater/Solution.h \
		../plater/Plate.h \
		../plater/PlacedPart.h \
		platesviewer.h \
		about.h \
		mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_worker.cpp: ../plater/Request.h \
		../plater/Part.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		../plater/Solution.h \
		../plater/Plate.h \
		../plater/PlacedPart.h \
		worker.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) worker.h -o moc_worker.cpp

moc_viewer.cpp: ../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) viewer.h -o moc_viewer.cpp

moc_wizard.cpp: ../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h \
		wizard.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) wizard.h -o moc_wizard.cpp

moc_platesviewer.cpp: viewer.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		platesviewer.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) platesviewer.h -o moc_platesviewer.cpp

moc_about.cpp: about.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) about.h -o moc_about.cpp

compiler_rcc_make_all: qrc_icons.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_icons.cpp
qrc_icons.cpp: icons.qrc \
		img/plater.png \
		img/save.png \
		img/part.png \
		img/clear.png \
		img/gears.png \
		img/open.png
	/usr/bin/rcc -name icons icons.qrc -o qrc_icons.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_wizard.h ui_platesviewer.h ui_about.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_wizard.h ui_platesviewer.h ui_about.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_wizard.h: wizard.ui
	/usr/bin/uic-qt4 wizard.ui -o ui_wizard.h

ui_platesviewer.h: platesviewer.ui
	/usr/bin/uic-qt4 platesviewer.ui -o ui_platesviewer.h

ui_about.h: about.ui
	/usr/bin/uic-qt4 about.ui -o ui_about.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		wizard.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h \
		worker.h \
		../plater/Request.h \
		../plater/Part.h \
		../plater/Solution.h \
		../plater/Plate.h \
		../plater/PlacedPart.h \
		platesviewer.h \
		about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		wizard.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h \
		worker.h \
		../plater/Request.h \
		../plater/Part.h \
		../plater/Solution.h \
		../plater/Plate.h \
		../plater/PlacedPart.h \
		platesviewer.h \
		about.h \
		ui_mainwindow.h \
		../plater/log.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

worker.o: worker.cpp worker.h \
		../plater/Request.h \
		../plater/Part.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		../plater/Solution.h \
		../plater/Plate.h \
		../plater/PlacedPart.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o worker.o worker.cpp

viewer.o: viewer.cpp viewer.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o viewer.o viewer.cpp

wizard.o: wizard.cpp wizard.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		viewer.h \
		ui_wizard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wizard.o wizard.cpp

platesviewer.o: platesviewer.cpp platesviewer.h \
		viewer.h \
		../plater/stl/StlFactory.h \
		../plater/stl/Model.h \
		../plater/stl/Volume.h \
		../plater/stl/Face.h \
		../plater/stl/Point3.h \
		../plater/Bitmap.h \
		../plater/util.h \
		../plater/Triangle.h \
		../plater/Rectangle.h \
		../plater/QuadTree.h \
		ui_platesviewer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o platesviewer.o platesviewer.cpp

about.o: about.cpp about.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o about.o about.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_worker.o: moc_worker.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_worker.o moc_worker.cpp

moc_viewer.o: moc_viewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_viewer.o moc_viewer.cpp

moc_wizard.o: moc_wizard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_wizard.o moc_wizard.cpp

moc_platesviewer.o: moc_platesviewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_platesviewer.o moc_platesviewer.cpp

moc_about.o: moc_about.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_about.o moc_about.cpp

qrc_icons.o: qrc_icons.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_icons.o qrc_icons.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

