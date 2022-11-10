#include "hospital.h"

// -- Getter&Setter -- //

const QUuid &Hospital::getHospitalID() const
{
    return hospitalID;
}

void Hospital::setHospitalID(const QUuid &newHospitalID)
{
    hospitalID = newHospitalID;
}

const std::string &Hospital::getHospitalName() const
{
    return hospitalName;
}

void Hospital::setHospitalName(const std::string &newHospitalName)
{
    hospitalName = newHospitalName;
}

const std::string &Hospital::getHospitalAddress() const
{
    return hospitalAddress;
}

void Hospital::setHospitalAddress(const std::string &newHospitalAddress)
{
    hospitalAddress = newHospitalAddress;
}

int Hospital::getHospitalPhone() const
{
    return hospitalPhone;
}

void Hospital::setHospitalPhone(int newHospitalPhone)
{
    hospitalPhone = newHospitalPhone;
}

int Hospital::getHospitalFax() const
{
    return hospitalFax;
}

void Hospital::setHospitalFax(int newHospitalFax)
{
    hospitalFax = newHospitalFax;
}

const std::list<std::shared_ptr<Person>> &Hospital::getEmployees() const
{
    return employees;
}

void Hospital::setEmployees(const std::list<std::shared_ptr<Person>> &newEmployees)
{
    employees = newEmployees;
}

void Hospital::addPatient()
{
    std::string weight;
    std::string height;
    std::string name;
    std::string gender;
    std::string birthDate;
    std::string address;
    std::string phone;


    std::cout << "Please enter patient name:";
    std::cin >> name;
    std::cout << "Please enter gender: (1)Female (2)Male (3)Trans (4)Intersex (5)Other";
    std::cin >> gender;
    std::cout << "Please enter birth date: (dd/mm/yyyy)";
    std::cin >> birthDate;
    std::cout << "Please enter address:";
    std::cin >> address;
    std::cout << "Please enter phone Number:";
    std::cin >> phone;
    std::cout << "Please enter weight:";
    std::cin >> weight;
    std::cout << "Please enter height:";
    std::cin >> height;

    //TODO: Validate


    std::shared_ptr<Patient> p(new Patient(std::stof(weight),std::stof(height),name,GENDER_ENUM(std::stoi(gender)),QDate::fromString(QString::fromStdString(birthDate),"dd/MM/yyyy"), address, std::stoi(phone)));
    employees.push_back(p);
}

// -- Ctors -- //

Hospital::Hospital() : hospitalID(QUuid::createUuid()),
    hospitalName("Test"),
    hospitalAddress("Test"),
    hospitalPhone(1),
    hospitalFax(1)
{

}

Hospital::Hospital(const QUuid &hospitalID,
                   const std::string &hospitalName,
                   const std::string &hospitalAddress,
                   int hospitalPhone,
                   int hospitalFax,
                   const std::list<std::shared_ptr<Person>> &employees):
    hospitalID(hospitalID),
    hospitalName(hospitalName),
    hospitalAddress(hospitalAddress),
    hospitalPhone(hospitalPhone),
    hospitalFax(hospitalFax),
    employees(employees)
{}



/*
ostream& operator << (ostream& os, const Hospital& printHospital)
{
    os << "Hospital Details:" << endl;
    os << "ID: " << printHospital.hospitalID.toString().toStdString() << endl;
    os << "Name:  " << printHospital.hospitalName <<  endl;
    os << "Address: " << printHospital.hospitalAddress <<  endl;
    os << "Phone Number: " << printHospital.hospitalPhone <<  endl;
    os << "Fax Number: " << printHospital.hospitalFax <<  endl;
    return os;
}



 * //		---Constructors Methodes---
Trip::Trip(int TripNum, char* Dest, Date NewDate) : numberingTrip(counter)
{
    CreatedCounter();
    this->SetDest(Dest);
    this->SetDate(NewDate);

}

Trip::Trip() : numberingTrip(counter) {
    CreatedCounter();
}

Trip::~Trip()
{
    delete [] this->Dest;
    counter--;
}

Trip::Trip(const Trip &trip) : numberingTrip(counter)
{
    this->NewDate = trip.NewDate;
    int size = strlen(trip.Dest) + 1;
    this->Dest = new char[size];
    strcpy_s(this->Dest, size, trip.Dest);
    CreatedCounter();
};

//this function is a static function
 void Trip::CreatedCounter() {
     counter++;
}

 void Trip::operator = (Trip& trip2)
 {
     this->NewDate = trip2.NewDate;
     int size = strlen(trip2.Dest) + 1;
     this->Dest = new char[size];
     strcpy_s(this->Dest, size, trip2.Dest);
 }
         */






