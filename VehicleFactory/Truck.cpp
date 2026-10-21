#include "Truck.h"
#include <iostream>
using namespace std;
Truck::Truck() : Vehicle("Truck", 100) {
}
void Truck::drive() const {
    cout << "Вантажівка перевозить вантажі.\n";
}