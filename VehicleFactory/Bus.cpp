#include "Bus.h"
#include <iostream>
using namespace std;
Bus::Bus() : Vehicle("Bus", 120) {
}
void Bus::drive() const {
    cout << "Автобус перевозить пасажирів.\n";
}