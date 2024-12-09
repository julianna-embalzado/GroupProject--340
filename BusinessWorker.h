#ifndef BUSINESSWORKER_H
#define BUSINESSWORKER_H

#include <string>
#include "Person.h"
#include "Ship.h"  // Include Ship class

class BusinessWorker : public Person {
private:
    std::string businessName;
    Ship* ship;  // Ship is part of the BusinessWorker class (composition)

public:
    // Updated constructor to accept Ship object
    BusinessWorker(std::string name, int age, std::string businessName, Ship* ship);

    void assignShip(Ship* ship);  // Communication: Assign a ship to the BusinessWorker
    void displayInfo() override;  // Communication: Display BusinessWorker info and ship details
    void displayShipInfo();  // Display ship info via communication
};

#endif
