#pragma once

#include <iostream>
#include <QUuid>
#include <QDate>
#include <string>
#include "types.h"

class Person
{
protected:
    QUuid personID;
    std::string personName;
    GENDER_ENUM gender;
    QDate birthDate;
    std::string personAddress;
    int personPhone;

    // -- Getter&Setter -- //

public:
    const QUuid &getPersonID() const;
    void setPersonID(const QUuid &newPersonID);
    const std::string &getPersonName() const;
    void setPersonName(const std::string &newPersonName);
    GENDER_ENUM getGender() const;
    void setGender(GENDER_ENUM newGender);
    const QDate &getBirthDate() const;
    void setBirthDate(const QDate &newBirthDate);
    const std::string &getPersonAddress() const;
    void setPersonAddress(const std::string &newPersonAddress);
    int getPersonPhone() const;
    void setPersonPhone(int newPersonPhone);

    // -- Ctor -- //

    Person(const QUuid &personID,
           const std::string &personName,
           GENDER_ENUM gender,
           const QDate &birthDate,
           const std::string &personAddress,
           int personPhone);
    virtual ~Person() = default;


};
