// Item.h
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
public:
    int id;
    std::string name;
    double price;

    Item(int id, std::string name, double price);  // Constructor declaration
    void displayItem() const;  // Method declaration
};

#endif
