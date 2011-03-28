#include "Lhinstaff.h"

LhinStaff::LhinStaff(int anId, QString aPassword, QString aName, QString aFacility)
        :User( anId,aPassword,  aName, aFacility) //We set WorkAtFacility to 0 as LHIN Staff doesn't work to a facility
{
    typeUser ="LhinStaff";
}

LhinStaff::~LhinStaff()
{

}
