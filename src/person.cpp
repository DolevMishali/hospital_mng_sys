#include "person.h"
#include <iostream>


// -- Getter&Setter -- //

const QUuid &Person::getPersonID() const
{
    return personID;
}

void Person::setPersonID(const QUuid &newPersonID)
{
    personID = newPersonID;
}

const std::string &Person::getPersonName() const
{
    return personName;
}

void Person::setPersonName(const std::string &newPersonName)
{
    personName = newPersonName;
}

GENDER_ENUM Person::getGender() const
{
    return gender;
}

void Person::setGender(GENDER_ENUM newGender)
{
    gender = newGender;
}

const QDate &Person::getBirthDate() const
{
    return birthDate;
}

void Person::setBirthDate(const QDate &newBirthDate)
{
    birthDate = newBirthDate;
}

const std::string &Person::getPersonAddress() const
{
    return personAddress;
}

void Person::setPersonAddress(const std::string &newPersonAddress)
{
    personAddress = newPersonAddress;
}

int Person::getPersonPhone() const
{
    return personPhone;
}

void Person::setPersonPhone(int newPersonPhone)
{
    personPhone = newPersonPhone;
}

// -- Ctor -- //

Person::Person(const QUuid &personID, const std::string &personName, GENDER_ENUM gender, const QDate &birthDate, const std::string &personAddress, int personPhone) : personID(personID),
    personName(personName),
    gender(gender),
    birthDate(birthDate),
    personAddress(personAddress),
    personPhone(personPhone)
{}

/*
ostream& operator <<(ostream& os, const Person& printPerson)
{
    os << "Person Details:" << endl;
    os << "ID: " << printPerson.personID.toString().toStdString() << endl;
    os << "Name:  " << printPerson.personName <<  endl;
    os << "Gender:  " << printPerson.gender <<  endl;
    os << "Birth Day: (DD.MM.YYYY) " << printPerson.birthDate.day() << "." <<printPerson.birthDate.month() << "." << printPerson.birthDate.year() <<  endl;
    os << "Age: " << printPerson.personAge <<  endl;
    os << "Address: " << printPerson.personAddress <<  endl;
    os << "Phone Number: " << printPerson.personPhone <<  endl;
    return os;
}
*/
