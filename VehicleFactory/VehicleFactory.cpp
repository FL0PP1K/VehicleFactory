#include "VehicleFactory.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
unique_ptr<Vehicle> VehicleFactory::create(int choice) {
    switch (choice) {
    case 1:
        return make_unique<Car>();
    case 2:
        return make_unique<Truck>();
    case 3:
        return make_unique<Bus>();
    default:
        return nullptr;
    }
}
