#include "Ship.h"
#include <iostream>

Ship::Ship(std::string id, std::string location) {
    this->shipID = id;
    this->location = location;
}

void Ship::displayShipInfo() {
    std::cout << "Ship ID: " << shipID << ", Location: " << location << std::endl;
}
