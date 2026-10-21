#pragma once
#include <string>
using namespace std;
class Vehicle {
protected:
    string type;
    int maxSpeed;
public:
    Vehicle(string t, int speed) {
        type = t;
        maxSpeed = speed;
    }
    string getType() const {
        return type;
    }
    int getMaxSpeed() const {
        return maxSpeed;
    }
    virtual void drive() const = 0;
    virtual ~Vehicle() = default;
};
