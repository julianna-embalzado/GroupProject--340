#include "Inventory.h"
#include <iostream>

// Constructor
Inventory::Inventory(const std::string& category, const Item& item)
    : category(category), item(item) {}

// Getter for category
std::string Inventory::getCategory() const {
    return category;
}

// Setter for category
void Inventory::setCategory(const std::string& category) {
    this->category = category;
}

// Getter for item
Item Inventory::getItem() const {
    return item;
}

// Display inventory information
void Inventory::displayInfo() const {
    std::cout << "Inventory Info:" << std::endl;
    std::cout << "Category: " << category << std::endl;
    std::cout << "Item Info:" << std::endl;
    item.displayInfo();
}
