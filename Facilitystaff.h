#ifndef FACILITYSTAFF_H
#define FACILITYSTAFF_H
#include <User.h>
#include <QString>


//We use inheritance for User - > FacilityStaff
class FacilityStaff : public User
{
public:
    FacilityStaff(int, QString, QString,QString);
    ~FacilityStaff();

};

#endif // FACILITYSTAFF_H
