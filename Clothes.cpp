#include "Clothes.h"
#include <iostream>

// Constructor
Clothes::Clothes(int id, const std::string& name, const std::string& size, const std::string& color)
    : Item(id, name), size(size), color(color) {}

// Getter for size
std::string Clothes::getSize() const {
    return size;
}

// Setter for size
void Clothes::setSize(const std::string& size) {
    this->size = size;
}

// Getter for color
std::string Clothes::getColor() const {
    return color;
}

// Setter for color
void Clothes::setColor(const std::string& color) {
    this->color = color;
}

// Override displayInfo
void Clothes::displayInfo() const {
    std::cout << "Clothes Info:" << std::endl;
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Color: " << color << std::endl;
}
//TEST IF CHANGES APPEAR
