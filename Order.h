#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "Item.h"

class Order {
private:
    std::string orderID;
    std::vector<Item> itemList;  // Order communicates with Item

public:
    Order(std::string id);
    void addItem(Item item);  // Communication: Add an item to the order
    void displayOrder();  // Communication: Display order details
};

#endif
