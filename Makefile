#############################################################################
# Makefile for building: Objects
# Generated by qmake (2.01a) (Qt 4.7.0) on: Sat Mar 26 22:10:48 2011
# Project:  Objects.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Objects.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
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
		User.cpp \
		Patient.cpp \
		Facilitystaff.cpp \
		Lhinstaff.cpp \
		SystemAdministrator.cpp \
		Bed.cpp \
		Facility.cpp \
		Hospital.cpp \
		LongTermCare.cpp \
		Waitinglist.cpp \
		AddBedController.cpp \
		AddWLController.cpp \
		AssignLTCController.cpp \
		AssignHospitalController.cpp \
		DataDb.cpp \
		DataController.cpp \
		Histogram.cpp \
		ReportController.cpp \
		CreateNewFacilityController.cpp \
		CreateFacility.cpp \
		Newfacility.cpp \
		NewUser.cpp \
		CreateNewUserController.cpp \
		Graph.cpp moc_mainwindow.cpp \
		moc_Histogram.cpp \
		moc_CreateFacility.cpp \
		moc_Newfacility.cpp \
		moc_NewUser.cpp \
		moc_Graph.cpp
OBJECTS       = main.o \
		mainwindow.o \
		User.o \
		Patient.o \
		Facilitystaff.o \
		Lhinstaff.o \
		SystemAdministrator.o \
		Bed.o \
		Facility.o \
		Hospital.o \
		LongTermCare.o \
		Waitinglist.o \
		AddBedController.o \
		AddWLController.o \
		AssignLTCController.o \
		AssignHospitalController.o \
		DataDb.o \
		DataController.o \
		Histogram.o \
		ReportController.o \
		CreateNewFacilityController.o \
		CreateFacility.o \
		Newfacility.o \
		NewUser.o \
		CreateNewUserController.o \
		Graph.o \
		moc_mainwindow.o \
		moc_Histogram.o \
		moc_CreateFacility.o \
		moc_Newfacility.o \
		moc_NewUser.o \
		moc_Graph.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Objects.pro
QMAKE_TARGET  = Objects
DESTDIR       = 
TARGET        = Objects

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

$(TARGET): ui_mainwindow.h ui_adduserwindow.h ui_CreateFacility.h ui_Newfacility.h ui_NewUser.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Objects.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtSql.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Objects.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtSql.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile Objects.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Objects1.0.0 || $(MKDIR) .tmp/Objects1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Objects1.0.0/ && $(COPY_FILE) --parents mainwindow.h User.h Patient.h Facilitystaff.h Lhinstaff.h SystemAdministrator.h Bed.h Facility.h Hospital.h LongTermCare.h Waitinglist.h AddBedController.h AddWLController.h AssignLTCController.h AssignHospitalController.h DataDb.h DataController.h Histogram.h ReportController.h AddFacilityControl.h AddFacilityControll.h CreateFacility.h CreateNewFacilityController.h Newfacility.h NewUser.h CreateNewUserController.h Graph.h .tmp/Objects1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp User.cpp Patient.cpp Facilitystaff.cpp Lhinstaff.cpp SystemAdministrator.cpp Bed.cpp Facility.cpp Hospital.cpp LongTermCare.cpp Waitinglist.cpp AddBedController.cpp AddWLController.cpp AssignLTCController.cpp AssignHospitalController.cpp DataDb.cpp DataController.cpp Histogram.cpp ReportController.cpp CreateNewFacilityController.cpp CreateFacility.cpp Newfacility.cpp NewUser.cpp CreateNewUserController.cpp Graph.cpp .tmp/Objects1.0.0/ && $(COPY_FILE) --parents mainwindow.ui adduserwindow.ui CreateFacility.ui Newfacility.ui NewUser.ui .tmp/Objects1.0.0/ && (cd `dirname .tmp/Objects1.0.0` && $(TAR) Objects1.0.0.tar Objects1.0.0 && $(COMPRESS) Objects1.0.0.tar) && $(MOVE) `dirname .tmp/Objects1.0.0`/Objects1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Objects1.0.0


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

compiler_moc_header_make_all: moc_mainwindow.cpp moc_Histogram.cpp moc_CreateFacility.cpp moc_Newfacility.cpp moc_NewUser.cpp moc_Graph.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_Histogram.cpp moc_CreateFacility.cpp moc_Newfacility.cpp moc_NewUser.cpp moc_Graph.cpp
moc_mainwindow.cpp: Bed.h \
		User.h \
		AddBedController.h \
		Facility.h \
		Patient.h \
		Hospital.h \
		LongTermCare.h \
		AddWLController.h \
		AssignLTCController.h \
		AssignHospitalController.h \
		DataController.h \
		CreateNewFacilityController.h \
		Newfacility.h \
		CreateNewUserController.h \
		NewUser.h \
		Histogram.h \
		ReportController.h \
		Graph.h \
		mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_Histogram.cpp: Histogram.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Histogram.h -o moc_Histogram.cpp

moc_CreateFacility.cpp: CreateNewFacilityController.h \
		Newfacility.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h \
		CreateFacility.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) CreateFacility.h -o moc_CreateFacility.cpp

moc_Newfacility.cpp: CreateNewFacilityController.h \
		Newfacility.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h \
		Newfacility.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Newfacility.h -o moc_Newfacility.cpp

moc_NewUser.cpp: CreateNewUserController.h \
		User.h \
		NewUser.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) NewUser.h -o moc_NewUser.cpp

moc_Graph.cpp: Graph.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Graph.h -o moc_Graph.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_adduserwindow.h ui_CreateFacility.h ui_Newfacility.h ui_NewUser.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_adduserwindow.h ui_CreateFacility.h ui_Newfacility.h ui_NewUser.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_adduserwindow.h: adduserwindow.ui
	/usr/bin/uic-qt4 adduserwindow.ui -o ui_adduserwindow.h

ui_CreateFacility.h: CreateFacility.ui
	/usr/bin/uic-qt4 CreateFacility.ui -o ui_CreateFacility.h

ui_Newfacility.h: Newfacility.ui
	/usr/bin/uic-qt4 Newfacility.ui -o ui_Newfacility.h

ui_NewUser.h: NewUser.ui
	/usr/bin/uic-qt4 NewUser.ui -o ui_NewUser.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		Bed.h \
		User.h \
		AddBedController.h \
		Facility.h \
		Patient.h \
		Hospital.h \
		LongTermCare.h \
		AddWLController.h \
		AssignLTCController.h \
		AssignHospitalController.h \
		DataController.h \
		CreateNewFacilityController.h \
		Newfacility.h \
		CreateNewUserController.h \
		NewUser.h \
		Histogram.h \
		ReportController.h \
		Graph.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		Bed.h \
		User.h \
		AddBedController.h \
		Facility.h \
		Patient.h \
		Hospital.h \
		LongTermCare.h \
		AddWLController.h \
		AssignLTCController.h \
		AssignHospitalController.h \
		DataController.h \
		CreateNewFacilityController.h \
		Newfacility.h \
		CreateNewUserController.h \
		NewUser.h \
		Histogram.h \
		ReportController.h \
		Graph.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

User.o: User.cpp User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o User.o User.cpp

Patient.o: Patient.cpp Patient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Patient.o Patient.cpp

Facilitystaff.o: Facilitystaff.cpp Facilitystaff.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Facilitystaff.o Facilitystaff.cpp

Lhinstaff.o: Lhinstaff.cpp Lhinstaff.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Lhinstaff.o Lhinstaff.cpp

SystemAdministrator.o: SystemAdministrator.cpp SystemAdministrator.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SystemAdministrator.o SystemAdministrator.cpp

Bed.o: Bed.cpp Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Bed.o Bed.cpp

Facility.o: Facility.cpp Facility.h \
		Patient.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Facility.o Facility.cpp

Hospital.o: Hospital.cpp Hospital.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Hospital.o Hospital.cpp

LongTermCare.o: LongTermCare.cpp LongTermCare.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LongTermCare.o LongTermCare.cpp

Waitinglist.o: Waitinglist.cpp Waitinglist.h \
		Patient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Waitinglist.o Waitinglist.cpp

AddBedController.o: AddBedController.cpp AddBedController.h \
		Bed.h \
		User.h \
		Facility.h \
		Patient.h \
		Hospital.h \
		LongTermCare.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AddBedController.o AddBedController.cpp

AddWLController.o: AddWLController.cpp AddWLController.h \
		Patient.h \
		Facility.h \
		Bed.h \
		User.h \
		LongTermCare.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AddWLController.o AddWLController.cpp

AssignLTCController.o: AssignLTCController.cpp AssignLTCController.h \
		Patient.h \
		Facility.h \
		Bed.h \
		User.h \
		LongTermCare.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AssignLTCController.o AssignLTCController.cpp

AssignHospitalController.o: AssignHospitalController.cpp AssignHospitalController.h \
		Patient.h \
		Hospital.h \
		Facility.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AssignHospitalController.o AssignHospitalController.cpp

DataDb.o: DataDb.cpp DataDb.h \
		Patient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DataDb.o DataDb.cpp

DataController.o: DataController.cpp DataController.h \
		Patient.h \
		Facility.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DataController.o DataController.cpp

Histogram.o: Histogram.cpp Histogram.h \
		ui_Histogram.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Histogram.o Histogram.cpp

ReportController.o: ReportController.cpp ReportController.h \
		Histogram.h \
		Graph.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ReportController.o ReportController.cpp

CreateNewFacilityController.o: CreateNewFacilityController.cpp CreateNewFacilityController.h \
		Newfacility.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CreateNewFacilityController.o CreateNewFacilityController.cpp

CreateFacility.o: CreateFacility.cpp CreateFacility.h \
		CreateNewFacilityController.h \
		Newfacility.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h \
		ui_CreateFacility.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CreateFacility.o CreateFacility.cpp

Newfacility.o: Newfacility.cpp Newfacility.h \
		CreateNewFacilityController.h \
		Facility.h \
		Patient.h \
		Bed.h \
		User.h \
		ui_Newfacility.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Newfacility.o Newfacility.cpp

NewUser.o: NewUser.cpp NewUser.h \
		CreateNewUserController.h \
		User.h \
		ui_NewUser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NewUser.o NewUser.cpp

CreateNewUserController.o: CreateNewUserController.cpp CreateNewUserController.h \
		User.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CreateNewUserController.o CreateNewUserController.cpp

Graph.o: Graph.cpp Graph.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Graph.o Graph.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_Histogram.o: moc_Histogram.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Histogram.o moc_Histogram.cpp

moc_CreateFacility.o: moc_CreateFacility.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_CreateFacility.o moc_CreateFacility.cpp

moc_Newfacility.o: moc_Newfacility.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Newfacility.o moc_Newfacility.cpp

moc_NewUser.o: moc_NewUser.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_NewUser.o moc_NewUser.cpp

moc_Graph.o: moc_Graph.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Graph.o moc_Graph.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

