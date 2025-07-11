#include "Car.h"

Car::~Car(){
    delete controller;
    controller=nullptr;
}

void Car::updateMileage(int x){
    if(x<=0){
        return;
    } else{
        mileage+=x;
    }
}