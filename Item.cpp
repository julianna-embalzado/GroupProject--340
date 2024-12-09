// Item.cpp
#include "Item.h"
#include <iostream>

Item::Item(int id, std::string name, double price)
    : id(id), name(name), price(price) {}

void Item::displayItem() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Price: " << price << std::endl;
}
