#include "CustomerCart.h"
#include "Shipping.h"
#include <iostream>

// Constructor
CustomerCart::CustomerCart(Shipping* shipping) : shipping(shipping) {}

// Getter for items
std::vector<Item> CustomerCart::getItems() const {
    return items;
}

// Getter for shipping
Shipping* CustomerCart::getShipping() const {
    return shipping;
}

// Add an item to the cart
void CustomerCart::addItem(const Item& item) {
    items.push_back(item);
    std::cout << "Added item: " << item.getName() << " (ID: " << item.getId() << ") to the cart." << std::endl;
}

// Remove an item from the cart
void CustomerCart::removeItem(int itemId) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getId() == itemId) {
            items.erase(it);
            return;
        }
    }
    std::cout << "Item with ID: " << itemId << " not found in the cart." << std::endl;
}

// Display cart information
void CustomerCart::displayCart() const {
    std::cout << "Customer Cart:" << std::endl;
    if (shipping) {
        std::cout << "Shipping Info:" << std::endl;
        shipping->displayInfo();
    }

    if (items.empty()) {
        std::cout << "The cart is empty." << std::endl;
    } else {
        std::cout << "Items in Cart:" << std::endl;
        for (const auto& item : items) {
            item.displayInfo();
        }
    }
}

// Get the total number of items in the cart
int CustomerCart::getTotalItems() const {
    return static_cast<int>(items.size());
}


