#ifndef CUSTOMERCART_H
#define CUSTOMERCART_H

#include <vector>
#include "Item.h"
//#include "Shipping.h"
class Shipping;

class CustomerCart {
private:
    std::vector<Item> items;    // List of items in the cart
    Shipping* shipping;          // Shipping information for the cart

public:
    // Constructor
    CustomerCart(Shipping* shipping);

    // Getter for items
    std::vector<Item> getItems() const;

    // Getter for shipping
    Shipping* getShipping() const;

    // Add an item to the cart
    void addItem(const Item& item);

    // Remove an item from the cart
    void removeItem(int itemId);

    // Display cart information
    void displayCart() const;

    // Get the total number of items in the cart
    int getTotalItems() const;
};

#endif // CUSTOMERCART_H
