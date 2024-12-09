#include "BusinessWorker.h"
#include <iostream>

BusinessWorker::BusinessWorker(std::string name, int age, std::string business, Ship* ship)
    : Person(name, age) {
        this->businessName = business;
        this->ship = ship;
    }

void BusinessWorker::assignShip(Ship* ship) {
    ship = ship;  // Assign ship to business worker
}

void BusinessWorker::displayInfo() {
    std::cout << "Business Worker: " << name << ", Age: " << age << ", Business: " << businessName << std::endl;
    if (ship) {
        ship->displayShipInfo();  // Call the communication method with ship
    }
}

void BusinessWorker::displayShipInfo() {
    if (ship) {
        ship->displayShipInfo();  // Display the ship's info
    }
}
