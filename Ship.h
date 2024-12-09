#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>

class Ship {
public:
    std::string shipID;
    std::string location;

    Ship(std::string id, std::string loc);
    void displayShipInfo();  // Communication: Display ship info
};

#endif
