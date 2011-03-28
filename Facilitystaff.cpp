#include "Facilitystaff.h"

FacilityStaff::FacilityStaff(int anId, QString aPassword, QString aName, QString aFacility)
    :User( anId,  aName, aPassword,aFacility)
{
    typeUser="FacilityStaff";  //Set the type of User
}

FacilityStaff::~FacilityStaff()
{
}



