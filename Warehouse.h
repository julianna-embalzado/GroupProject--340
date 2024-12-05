#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <vector>
#include "Inventory.h" // Assuming Inventory class exists

class Warehouse {
private:
    std::vector<Inventory> inventories; // List of inventory items in the warehouse

public:
    // Constructor
    Warehouse() = default;

    // Add an inventory item to the warehouse
    void addInventory(const Inventory& inventory);

    // Remove an inventory item by item ID (assuming Inventory has a method to get item ID)
    void removeInventory(int itemId);

    // Get all inventory items
    std::vector<Inventory> getInventories() const;

    // Display warehouse information
    void displayWarehouseInfo() const;

    // Find an inventory item by category
    std::vector<Inventory> findInventoryByCategory(const std::string& category) const;
};

#endif // WAREHOUSE_H
