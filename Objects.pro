#-------------------------------------------------
#
# Project created by QtCreator 2011-03-12T10:55:08
#
#-------------------------------------------------

QT       += core gui
QT       += sql

TARGET = Objects
TEMPLATE = app


SOURCES += main.cpp\
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
    Graph.cpp

HEADERS  += mainwindow.h \
    User.h \
    Patient.h \
    Facilitystaff.h \
    Lhinstaff.h \
    SystemAdministrator.h \
    Bed.h \
    Facility.h \
    Hospital.h \
    LongTermCare.h \
    Waitinglist.h \
    AddBedController.h \
    AddWLController.h \
    AssignLTCController.h \
    AssignHospitalController.h \
    DataDb.h \
    DataController.h \
    Histogram.h \
    ReportController.h \
    AddFacilityControl.h \
    AddFacilityControll.h \
    CreateFacility.h \
    CreateNewFacilityController.h \
    Newfacility.h \
    NewUser.h \
    CreateNewUserController.h \
    Graph.h

FORMS    += mainwindow.ui \
    adduserwindow.ui \
    CreateFacility.ui \
    Newfacility.ui \
    NewUser.ui
