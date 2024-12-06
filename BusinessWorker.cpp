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

//UpdateInventory method
void BusinessWorker::updateInventory(const std::string& itemName, int quantity, double price){
    //bool to check if we are adding item to the inventory or removing it
    if(isAdding){
        //Adding item in the Inventory
        if(inentory.find(itemName) != inventory.end() {
            //item exist increase the quantity and update price if needed
            inventory[itemName].quantity += quantity;
            //update the price if provided
            inventory[itemName].price  price;
        } else{
            //item does not exist make a new item in the inventory
            inventory[itemName] ={ itemName, quantity, price};
            std:: cout << "Added " << qunatity << " of " << itemName << " to the inventory." << std::endl;
        } else {
        //Removing Inventory
        if(inventory.find(itemName) != inventory.end()){
            if(inventory[itemName].quantity >= quantity){
                inventory[itemName].quantity -= quantity;
                std::cout << "Removed " << quantity << " of " << itemName << " from the Inventory." << std:: endl;
                
                //if item goes to 0, we remove it from inventory
                if(inventory[itemName].quantity == 0){
                    inventory.erase(itemName);
                    std::cout << itemName << "is now out of stock and removed from inventory." << std:: endl;
                }
            } else {
                std::cout << "Not enough stock to remove " << quantity << " of " << itemName << "!" << std:: endl;
            }
        } else {
            std:: cout << "Item " << itemName << "does not exist in the inventory!" << std:: endl
        }
    }
}

void BusinessWorker::addItem(const std::string& itemName, int quantity, double price) {
            //use updateInventory method to add items
            updateInventory(itemName, quantity, price, true);
        }
        
void BusinessWorker::removeItem(const std::string& itemName, int quantity){
            //reuse updateInventory method to remove items
            updateInventory(itemName, quantity, 0.0, false);
        }

void BusinesssWorker::shipOrder(const std::string& shipppingAddress, const std::unordered_map<std::string, int>& orderItems){
            std::cout << "Shipping the following items to " << shippingAddress << ":\n";
            
            //iterating over the inventory to find the item
            for (const auto& item : orderItems) {
                const std::string& itemName = item.first;
                int qunatity = item.second;
                
                //if the item is found subtract it from the inventory
                if(inventory.find(itemName) != inventory.end() && inventory[itemName].quantity >= quantity) {
                    std::cout << "Shipped " << quantity << " of " << itemName << std::endl;
                    inventory[itemName].quantity -= quantity;
                //if item in that inventory reaches 0, delete it
                    if (inventory[itemName].quantity == 0){
                        inventory.erase(itemName);
                    }
                } else {
                    std::cout << "Not enough" << itemName << " in inventory to fulfill the order." << std::endl;
                }
            }
        }

void BusinessWorker::printInventory() const{
            std::cour<< "Current Inventory:\n";
            for(const auto&item : inventory){
                std::cout<< item,first << ": " << item.second.quantity << " in stock, $" << item.second.price << " each\n";
            }
        }
