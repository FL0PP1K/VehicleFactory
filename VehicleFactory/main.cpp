#include <iostream>
#include "VehicleFactory.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "uk_UA.UTF-8");
    int choice;
    while (true) {
        cout << "\n===== Фабрика Транспортних Засобів =====\n";
        cout << "1. Машина\n";
        cout << "2. Вантажівка\n";
        cout << "3. Автобус\n";
        cout << "0. Вихід\n";
        cout << "Вибір: ";
        if (!(cin >> choice)) {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неправильний ввід!\n";
            continue;
        }
        if (choice == 0)
            break;
        unique_ptr<Vehicle> vehicle =
            VehicleFactory::create(choice);
        if (vehicle == nullptr) {
            cout << "Машина не знайдена!\n";
            continue;
        }
        cout << "\n===== Інформація про Транспортний Засіб =====\n";
        cout << "Тип: " << vehicle->getType() << endl;
        cout << "Максимальна швидкість: "
            << vehicle->getMaxSpeed() << " km/h\n";
        vehicle->drive();
    }
    return 0;
}