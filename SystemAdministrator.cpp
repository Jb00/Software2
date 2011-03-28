
#include "SystemAdministrator.h"

SystemAdministrator::SystemAdministrator(int anId, QString aPassword, QString aName, QString aFacility)
    :User( anId,  aName, aPassword,aFacility)
{
    typeUser ="SystemAdministrator";
}

SystemAdministrator::~SystemAdministrator()
{

}
