#include "Newfacility.h"
#include "ui_Newfacility.h"

NewFacility::NewFacility(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewFacility)
{
    ui->setupUi(this);
    connect(ui->okBtn,SIGNAL(clicked()),this,SLOT(okBtn_Clicked()));
}

NewFacility::~NewFacility()
{
    delete ui;
}

void NewFacility::okBtn_Clicked()
{
   // facilityName = ui->nameTxt->toPlainText();
   // area = ui->areaTxt->toPlainText();
   // NumberBedtotal = ui->bedsTxt->toPlainText();
   // hasWaitingList = ui->waitingTxt->toPlainText();

    id =(ui->id->toPlainText()).toInt();
    facilityName = ui->name->toPlainText();
    x= ui->x->toPlainText().toInt();
    y=ui->y->toPlainText().toInt();
    AC = ui->ac->toPlainText().toInt();
    CCC=ui->cc->toPlainText().toInt();
    LTC=ui->ltc->toPlainText().toInt();
    area =ui->area->toPlainText();

    CreateNewFacilityController::getInstance()->setId(id);
    CreateNewFacilityController::getInstance()->setName(facilityName);
    CreateNewFacilityController::getInstance()->setX(x);
    CreateNewFacilityController::getInstance()->setY(y);
    CreateNewFacilityController::getInstance()->setArea(area);
    CreateNewFacilityController::getInstance()->setAC(AC);
    CreateNewFacilityController::getInstance()->setCCC(CCC);
    CreateNewFacilityController::getInstance()->setAC(LTC);

    CreateNewFacilityController::getInstance()->addToDb();


  //  addFacility();

}
