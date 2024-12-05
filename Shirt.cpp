#include "Shirt.h"
#include <iostream>

// Constructor
Shirt::Shirt(int id, const std::string& name, const std::string& type)
    : Item(id, name), type(type) {}

// Getter for type
std::string Shirt::getType() const {
    return type;
}

// Setter for type
void Shirt::setType(const std::string& type) {
    this->type = type;
}

// Override displayInfo
void Shirt::displayInfo() const {
    std::cout << "Shirt Info:" << std::endl;
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Type: " << type << std::endl;
}
