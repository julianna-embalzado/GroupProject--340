#include "BusinessWorker.h"
#include <iostream>

BusinessWorker::BusinessWorker(std::string n, int a, std::string bName, Ship* s)
    : Person(n, a), businessName(bName), ship(s) {}  // Assign ship passed from main

void BusinessWorker::assignShip(Ship* s) {
    ship = s;  // Assign ship to business worker
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
