#include "CustomerCart.h"
#include <iostream>

// Constructor
CustomerCart::CustomerCart(const Shipping& shipping) : shipping(shipping) {}

// Getter for items
std::vector<Item> CustomerCart::getItems() const {
    return items;
}

// Getter for shipping
Shipping CustomerCart::getShipping() const {
    return shipping;
}

// Add an item to the cart
void CustomerCart::addItem(const Item& item) {
    items.push_back(item);
}

// Remove an item from the cart by item ID
void CustomerCart::removeItem(int itemId) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getId() == itemId) {
            items.erase(it);
            break;
        }
    }
}

// Display cart information
void CustomerCart::displayCart() const {
    std::cout << "Customer Cart:" << std::endl;
    std::cout << "Shipping Info:" << std::endl;
    shipping.displayInfo();
    std::cout << "Items in Cart:" << std::endl;
    for (const auto& item : items) {
        item.displayInfo();
    }
}

// Get the total number of items in the cart
int CustomerCart::getTotalItems() const {
    return items.size();
}