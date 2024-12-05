#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include "Item.h" // Assuming Item class exists

class Inventory {
private:
    std::string category;   // Category of the inventory (e.g., Clothing, Electronics)
    Item item;              // Associated item in the inventory

public:
    // Constructor
    Inventory(const std::string& category, const Item& item);

    // Getter and Setter for category
    std::string getCategory() const;
    void setCategory(const std::string& category);

    // Getter for item
    Item getItem() const;

    // Display inventory information
    void displayInfo() const;
};

#endif // INVENTORY_H
