#pragma once
#include "Vehicle.h"
class Bus : public Vehicle {
public:
    Bus();
    void drive() const override;
};