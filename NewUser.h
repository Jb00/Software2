#ifndef NEWUSER_H
#define NEWUSER_H

#include <QWidget>
#include <QString>
#include "CreateNewUserController.h"

namespace Ui {
    class NewUser;
}

class NewUser : public QWidget
{
    Q_OBJECT

public:
    explicit NewUser(QWidget *parent = 0);
    ~NewUser();

private:
    Ui::NewUser *ui;
    QString name;
    QString type;
    QString password;
    int id;

private slots:
    void okBtn_Clicked();
};

#endif // NEWUSER_H
