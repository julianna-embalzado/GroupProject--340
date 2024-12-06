#ifndef BUSINESSWORKER_H
#define BUSINESSWORKER_H

#include "Person.h"
using namepsa

class BusinessWorker : public Person {
public:
    // Constructor
    BusinessWorker(int id, const std::string& name, const std::string& email);

    // Override the pure virtual function
    void displayInfo() const override;
    
    //Method to update the inventory (either to add or modify the item)
    void updateInventory(const std::string& itemName, int quantity, double price, bool isAdding);
    
    //Method to add item to the inventory
    void addItem(const std:: string&itemName, int quantity, double price);
    
    //Method to process a shipment with an address
    void shipOrder(const std:: string& shipping Address, const std::unordered_map<std::string, int >& orderItems);
    
    //Method to get the current inventory status
    void printInventory() const;
    
    //inventory map
    private:
    std::unordered_map<std::string, InventoryItem> inventory;
};

#endif // BUSINESSWORKER_H
