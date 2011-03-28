#ifndef CREATENEWUSERCONTROLLER_H
#define CREATENEWUSERCONTROLLER_H
#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>

#include "User.h"

class CreateNewUserController
{
private :
        static CreateNewUserController* anInstance;
        CreateNewUserController();
        QString name;
        QString password;
        QString type;
        int id;
        QList<User *> *userList;

public:
        static CreateNewUserController* getInstance();
        void addToDb();
        void setName(QString);
        void setPassword(QString);
        void setType(QString);
        void setId(int);
        void setList(QList<User *>*);
};

#endif // CREATENEWUSERCONTROLLER_H
