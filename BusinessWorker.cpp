#include "BusinessWorker.h"
#include <iostream>

// Constructor
BusinessWorker::BusinessWorker(int id, const std::string& name, const std::string& email)
    : Person(id, name, email) {}

// Override displayInfo
void BusinessWorker::displayInfo() const {
    std::cout << "Business Worker Info:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}
