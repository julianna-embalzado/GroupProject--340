// Order.cpp
#include "Order.h"
#include "Item.h"
#include <iostream>

Order::Order(std::string id) : orderID(id) {}

void Order::addItem(Item item) {
    itemList.push_back(item);
}

void Order::displayOrder() {
    std::cout << "Order ID: " << orderID << std::endl;
    for (auto& item : itemList) {
        item.displayItem();  // Display each item's details
    }
}
