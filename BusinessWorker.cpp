#include "BusinessWorker.h"
#include <iostream>


// Constructor
BusinessWorker::BusinessWorker(int id, const std::string& name, const std::string& email)
    : Person(id, name, email) {}

// Override displayInfo
void BusinessWorker::displayInfo() const {
    std::cout << "Business Worker Info:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}

// Update inventory method
void BusinessWorker::updateInventory(const std::string& itemName, int quantity, double price, bool isAdding) {
    if (isAdding) {
        if (inventory.find(itemName) != inventory.end()) {
            inventory[itemName].quantity += quantity;
            inventory[itemName].price = price;  // Update price if necessary
        } else {
            inventory[itemName] = {itemName, quantity, price};
        }
        std::cout << "Added " << quantity << " of " << itemName << " to inventory." << std::endl;
    } else {
        if (inventory.find(itemName) != inventory.end()) {
            if (inventory[itemName].quantity >= quantity) {
                inventory[itemName].quantity -= quantity;
                std::cout << "Removed " << quantity << " of " << itemName << " from inventory." << std::endl;
                if (inventory[itemName].quantity == 0) {
                    inventory.erase(itemName);
                    std::cout << itemName << " is now out of stock." << std::endl;
                }
            } else {
                std::cout << "Not enough stock to remove " << quantity << " of " << itemName << "!" << std::endl;
            }
        } else {
            std::cout << "Item " << itemName << " does not exist in inventory!" << std::endl;
        }
    }
}

// Add item to inventory
void BusinessWorker::addItem(const std::string& itemName, int quantity, double price) {
    updateInventory(itemName, quantity, price, true);
}

// Remove item from inventory
void BusinessWorker::removeItem(const std::string& itemName, int quantity) {
    updateInventory(itemName, quantity, 0.0, false);
}

// Ship order
void BusinessWorker::shipOrder(const std::string& shippingAddress, const std::unordered_map<std::string, int>& orderItems) {
    std::cout << "Shipping to: " << shippingAddress << std::endl;
    for (const auto& item : orderItems) {
        const std::string& itemName = item.first;
        int quantity = item.second;
        if (inventory.find(itemName) != inventory.end() && inventory[itemName].quantity >= quantity) {
            inventory[itemName].quantity -= quantity;
            std::cout << "Shipped " << quantity << " of " << itemName << std::endl;
            if (inventory[itemName].quantity == 0) {
                inventory.erase(itemName);
            }
        } else {
            std::cout << "Not enough " << itemName << " in inventory to fulfill the order." << std::endl;
        }
    }
}

// Print inventory
void BusinessWorker::printInventory() const {
    std::cout << "Current Inventory:" << std::endl;
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second.quantity << " in stock, $"
                  << item.second.price << " each" << std::endl;
    }
}
