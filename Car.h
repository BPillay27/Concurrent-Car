#ifndef CAR_H
#define CAR_H

#include <string>
#include "User.h"
class Car
{
private:
    std::string brand;
    int mileage;
    std::string make;
    int id;
    int currentSpeed;
    User *controller;

public:
    Car(/* args */);
    ~Car();
};

Car::Car(/* args */)
{
}

Car::~Car()
{
}

#endif
