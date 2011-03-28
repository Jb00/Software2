#include "User.h"

User::User(int anId, QString aPassword, QString aName, QString aFacility)
{
    id = anId;
    name = aName;
    workAtFacility = aFacility;
    password = aPassword;
}

User::~User()
{

}

//Return id
int User::getId()
{
    return id;
}

//Return Name
QString User::getName()
{
    return name;
}

//Return Type
QString User::getType()
{
    return typeUser;
}

//Return Where the user works, 0 if not associated with a facility
QString User::getFacility()
{
    return workAtFacility;
}


