#include "Customer.h"
#include <iostream>


// Constructor
Customer::Customer(int id, const std::string& name, const std::string& email, const std::string& address, BusinessWorker& worker)
    : Person(id, name, email), address(address), businessWorker(worker), cart(CustomerCart()) {}

// Getter for address
std::string Customer::getAddress() const {
    return address;
}

// Setter for address
void Customer::setAddress(const std::string& address) {
    this->address = address;
}

// Override displayInfo
void Customer::displayInfo() const {
    std::cout << "Customer Info:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Address: " << address << std::endl;
}

void Customer::viewItem(const std::string& itemName){
    //customer uses business worker methods to find inventory so they could view it
    const auto& inventory = businessWorker.getInventory();
    auto it = inventory.find(itemName);
    
    //if businessworker finds it, gives it to costumer
    if(it != inventory.end()){
        std::cout << "Item: " << it->second.name << ", Price: $" << it->second.price <<", Quantity: " << it->secondquantity << std::endl;
    } else {
        std::cout << "Item " << itemName << " not found in inventory." << std::endl;
    }
}

// Add an item to the cart
void Customer::addToCart(const std::string& itemName, int quantity) {
    const auto& inventory = businessWorker.getInventory();
    auto it = inventory.find(itemName);
    if (it != inventory.end()) {
        if (it->second.quantity >= quantity) {
            cart.addItem({it->second.id, it->second.name, it->second.price, quantity});
            std::cout << "Added " << quantity << " of " << itemName << " to your cart." << std::endl;
        } else {
            std::cout << "Not enough stock for " << itemName << " in inventory." << std::endl;
        }
    } else {
        std::cout << "Item " << itemName << " not found in inventory." << std::endl;
    }
}

void Customer::buyItems() {
    if(cart.getTotalItems() == 0){
        std::cout << "Your cart is empty!" << std:: endl;
    }
    //Process each item to cart and pass to the order to businessworker
    const auto& itemsInCart = cart.getItems();
    for (const auto& item : itemsInCart) {
        const std::string& itemName = item.first;
        int quantity = item.second.quantity;

        std::unordered_map<std::string, int> order;
        order[itemName] = quantity;

        businessWorker.shipOrder(address, order);
    }
    
    cart.clearCart();
    std::cout << "Purchase complete! Your items are on their way." << std::endl;
}
