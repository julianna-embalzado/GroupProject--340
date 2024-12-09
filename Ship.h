#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>

class Ship {
private:
    std::string shipID;
    std::string location;

public:
    Ship(std::string id, std::string loc);
    void displayShipInfo();  // Display ship info
};

#endif
