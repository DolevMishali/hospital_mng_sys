#include "patient.h"
#include <iostream>

float Patient::getWeight() const
{
    return weight;
}

void Patient::setWeight(float newWeight)
{
    weight = newWeight;
}

float Patient::getHeight() const
{
    return height;
}

void Patient::setHeight(float newHeight)
{
    height = newHeight;
}


Patient::Patient(float weight,
                 float height,
                 const std::string &personName,
                 GENDER_ENUM gender,
                 const QDate &birthDate,
                 const std::string &personAddress,
                 int personPhone): Person(QUuid::createUuid(), personName, gender, birthDate,personAddress, personPhone),weight(weight),height(height)
{}
