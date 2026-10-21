#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    void drive() const override;
};