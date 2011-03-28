#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QString>
#include "Bed.h"
#include "AddBedController.h"
#include "AddWLController.h"
#include "AssignLTCController.h"
#include "AssignHospitalController.h"
#include "Hospital.h"
#include "LongTermCare.h"
#include "Patient.h"
#include "DataController.h"
#include "CreateNewFacilityController.h"

#include "CreateNewUserController.h"
#include "NewUser.h"
#include "User.h"


#include "Histogram.h"
#include "ReportController.h"
#include "Newfacility.h"
#include "Graph.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Hospital * aFacility2;
    Hospital * aFacility3;
    LongTermCare * aFacility4;
    Patient * aPatient2;
    QList<Patient*> listOfPatient;
    QList<Facility*>listOfFacility;
    QList<User*> listOfUser;


    //Test Patient for Add patient to LTC
    Patient * aPatient11;
    Patient * aPatient12;
    Patient * aPatient13;
    Patient * aPatient14;
    Patient * aPatient15;
    Patient * aPatient16;
    Patient * aPatient17;
    QList<Patient*> aPatientList;

    //test histogram test

    Histogram* histo;
//    ReportController* aReport;


    CreateNewFacilityController* aNewFacilityController;

    //Needed For Create Facility
    NewFacility* aNewFacility;

    //Needed For create new user
    NewUser* aNewUser;







private slots:
    void addBedClick();
    void addWL();
    void assignToBed();
    void dataTest();
    void histogram();
    void graph();
    void addFacility();
    void addUser();

};

#endif // MAINWINDOW_H
