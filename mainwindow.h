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


    //Test Patient for Add patient to LTC
    Patient * aPatient11;
    Patient * aPatient12;
    Patient * aPatient13;
    Patient * aPatient14;
    Patient * aPatient15;
    Patient * aPatient16;
    Patient * aPatient17;
    QList<Patient*> aPatientList;


private slots:
    void addBedClick();
    void addWL();
    void assignToBed();
    void dataTest();
};

#endif // MAINWINDOW_H
