#include "Car.h"
#include <iostream>
using namespace std;
Car::Car() : Vehicle("Car", 180) {
}
void Car::drive() const {
    cout << "Машина їде по дорозі.\n";
}