#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QString>
#include "AddBedController.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QDate aDate(1998,2,3);
    ui->setupUi(this);
    //Used to connect button to Slot
     connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(addBedClick()));
     connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(addWL()));
     connect(ui->pushButton_7, SIGNAL(clicked()),this,SLOT(assignToBed()));
     connect(ui->pushButton_8, SIGNAL(clicked()),this,SLOT(dataTest()));
     connect(ui->push_histo, SIGNAL(clicked()),this,SLOT(histogram()));
     connect(ui->push_addFacility, SIGNAL(clicked()),this,SLOT(addFacility()));
     connect(ui->push_addUser, SIGNAL(clicked()),this,SLOT(addUser()));
     connect(ui->push_Graph, SIGNAL(clicked()),this,SLOT(graph()));



     //Fake information for testing purpose
     aFacility2 = new Hospital("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
     aFacility3 = new Hospital("AThird","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
     aFacility4 = new LongTermCare("AThird","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
     aPatient2 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);

   /*  aPatient11 = new Patient ("Bob11","Henry11",aDate,aDate,"AString","Astring2",5);
     aPatient12 = new Patient ("Bob12","Henry12",aDate,aDate,"AString","Astring2",5);
     aPatient13 = new Patient ("Bob13","Henry13",aDate,aDate,"AString","Astring2",5);
     aPatient14 = new Patient ("Bob14","Henry14",aDate,aDate,"AString","Astring2",5);*/
     aPatient2 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
     aPatient15 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
     aPatient16 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
     aPatient17 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);


     aPatientList <<aPatient2<<aPatient2<<aPatient2<<aPatient2;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addWL()
{
    AddWLController::getInstance()->addWaitingList(aPatient2,aFacility4);
    std::cout <<AddWLController::getInstance()->getSize(aFacility4);
}

void MainWindow::addBedClick()
{
 //   LongTermCare * aFacility3 = new LongTermCare("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE

    if(ui->radioButton_4->isChecked())
    {
        ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Acute",aFacility2));
    }
        else
            if (ui->radioButton_5->isChecked())
            {
                ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Complex",aFacility2));
            }
                if (ui->radioButton_6->isChecked())
                {
                      //ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"LTC",aFacility3));
                }

  //  ui->btn_total_2->setText(ui->textAdd_2->text());
}

void MainWindow::assignToBed()
{
    qDebug() <<listOfFacility.size();
    Hospital aHospitalTest();
    LongTermCare aLTC();
    QString aString= "Acute"; // ONLY USE FOR TESTING FOR ADDTOBED NEED A STRING

        std::cout<<"HOSPITAL!";
    //    AssignHospitalController::getInstance()->addtoBed(aPatient2,aFacility2,"Acute");  //TEST FOR ACUTE
        AssignHospitalController::getInstance()->addtoBed(aPatient2,aFacility2,"Complex");  //TEST FOR COMPLEX

}

void MainWindow::dataTest() // TO ADD USER? BUT BART MIGHT HAVE DONE IT, STILL DO IT
{
    DataController::getInstance()->setupPatients(&listOfPatient);
    DataController::getInstance()->setupFacility(&listOfFacility);
    std::cout << listOfPatient.size();
    std::cout << "FACILITY : "<< listOfFacility.size();

//    qDebug() << (listOfPatient.at(2)->getFName());
//    qDebug() << (listOfFacility.at(3)->getName());
}

void MainWindow::histogram()
{
//    ReportController::getInstance()->setupHistogram();
    ReportController::getInstance()->mismatchCCCLTC();
}

void MainWindow::graph()
{
    ReportController::getInstance()->setupGraph();
}

void MainWindow::addFacility()
{
 //   qDebug() <<"ADDFACILITY" <<listOfFacility.size();
    aNewFacility = new NewFacility();
    CreateNewFacilityController::getInstance()->setList(&listOfFacility);

    aNewFacility->show(); //will be done in Map control
    //Wait untill it gets close.
    // then
    //    CreateNewFacilityController::getInstance()->createFacility(&listOfFacility);
    //then reset all fields
}

void MainWindow::addUser()
{
    qDebug() <<"test";
    aNewUser = new NewUser();
    CreateNewUserController::getInstance()->setList(&listOfUser);
    aNewUser->show();
}
