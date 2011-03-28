#include "CreateFacility.h"
#include "ui_CreateFacility.h"

CreateFacility::CreateFacility(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateFacility)
{
    ui->setupUi(this);
}

CreateFacility::~CreateFacility()
{
    delete ui;
}


void CreateFacility::okBtn()
{
   // facilityName = ui->nameTxt->toPlainText();
   // area = ui->areaTxt->toPlainText();
   // NumberBedtotal = ui->bedsTxt->toPlainText();
   // hasWaitingList = ui->waitingTxt->toPlainText();

    id =ui->id->toPlainText();
    facilityName = ui->name->toPlainText();
    x= ui->x->toPlainText();
    y=ui->y->toPlainText();
    AC = ui->ac->toPlainText();
    CCC=ui->cc->toPlainText();
    LTC=ui->ltc->toPlainText();

  //  addFacility();

}


