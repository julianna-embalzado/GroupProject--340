#ifndef BUSINESSWORKER_H
#define BUSINESSWORKER_H

#include "Person.h"

class BusinessWorker : public Person {
public:
    // Constructor
    BusinessWorker(int id, const std::string& name, const std::string& email);

    // Override the pure virtual function
    void displayInfo() const override;
};

#endif // BUSINESSWORKER_H
