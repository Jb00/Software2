#ifndef NEWFACILITY_H
#define NEWFACILITY_H

#include <QWidget>
#include "CreateNewFacilityController.h"

namespace Ui {
    class NewFacility;
}

class NewFacility : public QWidget
{
    Q_OBJECT

public:
    explicit NewFacility(QWidget *parent = 0);
    ~NewFacility();

private:
    Ui::NewFacility *ui;

    int id;
    QString facilityName;
    int x;
    int y;
    int AC;
    int CCC;
    int LTC;
    QString area;


private slots :
       void okBtn_Clicked();


};

#endif // NEWFACILITY_H
