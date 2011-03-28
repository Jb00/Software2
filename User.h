#ifndef USER_H
#define USER_H

#include <QString>
//User.h
//Define a user



class User
{


 protected :
        QString name;
        QString typeUser;
        int id;
        QString workAtFacility;
        QString password;

public:
        User(int, QString, QString,QString);
        ~User();

        int getId();
        QString getName();
        QString getFacility();
        QString getType();

};

#endif // USER_H
