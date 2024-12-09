#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Person.h"
#include "Order.h"

class Customer : public Person {
private:
    std::string address;
    std::vector<Order> orders;  // Customer communicates with Orders

public:
    Customer(std::string name, int aage, std::string address);
    void addOrder(Order o);  // Communication: Add an order to the customer
    void displayInfo() override;  // Communication: Display Customer info and associated Orders
};

#endif
