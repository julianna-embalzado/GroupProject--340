#ifndef BUSINESSWORKER_H
#define BUSINESSWORKER_H

#include "Person.h"
using namespace std;

class BusinessWorker : public Person {
    public:
        // Constructor
        BusinessWorker(int id, const std::string& name, const std::string& email);

        // Override the pure virtual function
        void displayInfo() const override;
        
        // Methods to update the inventory
        void updateInventory(const std::string& itemName, int quantity, double price, bool isAdding);
        void addItem(const std::string& itemName, int quantity, double price);
        void removeItem(const std::string& itemName, int quantity);
        
        //Method to process a shipment with an address
        void shipOrder(const std::string& shippingAddress, const std::unordered_map<std::string, int>& orderItems);
        
        //Method to get the current inventory status
        void printInventory() const;
    
    private:
        std::unordered_map<std::string, InventoryItem> inventory; // Inventory map
};

#endif // BUSINESSWORKER_H
