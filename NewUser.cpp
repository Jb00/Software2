#include "NewUser.h"
#include "ui_NewUser.h"

NewUser::NewUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewUser)
{
    ui->setupUi(this);
    connect(ui->okBtn,SIGNAL(clicked()),this,SLOT(okBtn_Clicked()));
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::okBtn_Clicked()
{
    qDebug() <<"in click";
    QString name;
    QString type;
    QString password;
    name = ui->nameTxt->toPlainText();
    type =ui->careTxt->toPlainText();
    password =ui->passwordText->toPlainText();
    id = ui->idTxt->toPlainText().toInt();

    CreateNewUserController::getInstance()->setId(id);
    CreateNewUserController::getInstance()->setName(name);
    CreateNewUserController::getInstance()->setType(type);
    CreateNewUserController::getInstance()->setPassword(password);

    CreateNewUserController::getInstance()->addToDb();

}
