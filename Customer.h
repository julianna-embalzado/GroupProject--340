#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include "BusinessWorker.h"
#include "CustomerCart.h"

class CustomerCart;

class Customer : public Person {
private:
    std::string address;
    //reference to businessworker object
    BusinessWorker& businessWorker;
    //Customer's cart
    CustomerCart cart;

public:
    // Constructor
    Customer(int id, const std::string& name, const std::string& email, const std::string& address, BusinessWorker& worker);


    // Getter and Setter for address
    std::string getAddress() const;
    void setAddress(const std::string& address);

    // Override the pure virtual function
    void displayInfo() const override;
    
    //Method to view an item from the inventory
    void viewItem(const std::string& itemName);
    
    //Method to add an item to the cart
    void addToCart(const std::string& itemName, int quantity);
    
    //Method to buy items in the cart
    void buyItems();
};

#endif // CUSTOMER_H
