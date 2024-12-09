// Item.cpp
#include "Item.h"
#include <iostream>

Item::Item(int id, std::string name, double price){
    this->id = id;
    this->name = name;
    this->price = price;
}
void Item::displayItem() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Price: " << price << std::endl;
}
