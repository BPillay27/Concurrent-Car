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
    Car(const std::string &brand, int mileage, const std::string &make, int id)
        : brand(brand), mileage(mileage), make(make), id(id), currentSpeed(0), controller(nullptr) {}
    ~Car();

    void updateMileage(int x);

    void setController(User *user)
    {
        controller = user;
    }
    std::string getBrand()
    {
        return brand;
    }

    int getMileage()
    {
        return mileage;
    }

    std::string getMake()
    {
        return make;
    }

    int getId()
    {
        return id;
    }

    int getCurrentSpeed()
    {
        return currentSpeed;
    }

    User *getController()
    {
        return controller;
    }
};

#endif
