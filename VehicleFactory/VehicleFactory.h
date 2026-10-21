#pragma once
#include "Vehicle.h"
#include <memory>
class VehicleFactory {
public:
    static unique_ptr<Vehicle> create(int choice);
};
