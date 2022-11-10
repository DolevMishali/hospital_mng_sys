#pragma once
#include <iostream>
#include <list>
#include <QUuid>
#include <QDate>
#include <string>

#include "person.h"
#include "patient.h"

class Hospital
{

    QUuid hospitalID;
    std::string hospitalName;
    std::string hospitalAddress;
    int hospitalPhone;
    int hospitalFax;
    std::list<std::shared_ptr<Person>> employees;
public:
    Hospital();
    // -- Ctors -- //

    Hospital(const QUuid &hospitalID,
             const std::string &hospitalName,
             const std::string &hospitalAddress,
             int hospitalPhone,
             int hospitalFax,
             const std::list<std::shared_ptr<Person>> &employees);



    // -- Getter&Setter -- //

    const QUuid &getHospitalID() const;
    void setHospitalID(const QUuid &newHospitalID);
    const std::string &getHospitalName() const;
    void setHospitalName(const std::string &newHospitalName);
    const std::string &getHospitalAddress() const;
    void setHospitalAddress(const std::string &newHospitalAddress);
    int getHospitalPhone() const;
    void setHospitalPhone(int newHospitalPhone);
    int getHospitalFax() const;
    void setHospitalFax(int newHospitalFax);
    const std::list<std::shared_ptr<Person>>  &getEmployees() const;
    void setEmployees(const std::list<std::shared_ptr<Person>> &newEmployees);


    // -- Methods -- //
    void addPatient();

};
