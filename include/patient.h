#pragma once

#include <iostream>
#include <QUuid>
#include <QDateTime>
#include <string>
#include "person.h"
#include "types.h"

class Patient: public Person
{
    float weight;
    float height;

public:
    std::string allergies;
    std::string specialRequestions;
    std:: string sicknessName;
    QDate acceptedDate;
    PATIENT_STATUS_ENUM patientStatus = PATIENT_STATUS_ENUM::UNRECORDED;
// to add: visit,persceptions.

public:

    // -- Ctor -- //
    ~Patient(){}
    Patient(float weight,
            float height,
            const std::string &personName,
            GENDER_ENUM gender,
            const QDate &birthDate,
            const std::string &personAddress,
            int personPhone);

    // -- Getter&Setter -- //
    float getWeight() const;
    void setWeight(float newWeight);
    float getHeight() const;
    void setHeight(float newHeight);

    // -- Methods -- //


};
