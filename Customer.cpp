#include "Customer.h"
#include <iostream>

// Constructor
Customer::Customer(int id, const std::string& name, const std::string& email, const std::string& address)
    : Person(id, name, email), address(address) {}

// Getter for address
std::string Customer::getAddress() const {
    return address;
}

// Setter for address
void Customer::setAddress(const std::string& address) {
    this->address = address;
}

// Override displayInfo
void Customer::displayInfo() const {
    std::cout << "Customer Info:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Address: " << address << std::endl;
}
