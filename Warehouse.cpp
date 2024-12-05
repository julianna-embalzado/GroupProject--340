#include "Warehouse.h"
#include <iostream>

// Add an inventory item to the warehouse
void Warehouse::addInventory(const Inventory& inventory) {
    inventories.push_back(inventory);
}

// Remove an inventory item by item ID
void Warehouse::removeInventory(int itemId) {
    for (auto it = inventories.begin(); it != inventories.end(); ++it) {
        if (it->getItem().getId() == itemId) {
            inventories.erase(it);
            break;
        }
    }
}

// Get all inventory items
std::vector<Inventory> Warehouse::getInventories() const {
    return inventories;
}

// Display warehouse information
void Warehouse::displayWarehouseInfo() const {
    std::cout << "Warehouse Info:" << std::endl;
    for (const auto& inventory : inventories) {
        inventory.displayInfo();
    }
}

// Find inventory items by category
std::vector<Inventory> Warehouse::findInventoryByCategory(const std::string& category) const {
    std::vector<Inventory> result;
    for (const auto& inventory : inventories) {
        if (inventory.getCategory() == category) {
            result.push_back(inventory);
        }
    }
    return result;
}
