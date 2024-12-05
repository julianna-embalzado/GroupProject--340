#include "Item.h"
#include <iostream>

// Constructor
Item::Item(int id, const std::string& name)
    : id(id), name(name) {}

// Getter for id
int Item::getId() const {
    return id;
}

// Getter for name
std::string Item::getName() const {
    return name;
}

// Setter for name
void Item::setName(const std::string& name) {
    this->name = name;
}

// Display method
void Item::displayInfo() const {
    std::cout << "Item Info:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
}
