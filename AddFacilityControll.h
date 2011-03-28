#ifndef ADDFACILITYCONTROLL_H
#define ADDFACILITYCONTROLL_H

class AddFacilityControl
{
private :
        AddFacilityControl();
        static AddFacilityControl* anInstance;
public:
        static AddFacilityControl* getInstance();
        void addFacility();
        ~AddFacilityControl();
};

#endif // ADDFACILITYCONTROLL_H
