#ifndef CREATEFACILITY_H
#define CREATEFACILITY_H

#include <QMainWindow>
#include "CreateNewFacilityController.h"

namespace Ui {
    class CreateFacility;
}

class CreateFacility : public QMainWindow
{
    Q_OBJECT


public:
    explicit CreateFacility(QWidget *parent = 0);
    ~CreateFacility();

private:
    Ui::CreateFacility *ui;
    QString id;
    QString facilityName;
    QString x;
    QString y;
    QString AC;
    QString CCC;
    QString LTC;
//    CreateNewFacilityController aNewController;


private slots :
       void okBtn();
};

#endif // CREATEFACILITY_H



