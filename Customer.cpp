#include "Customer.h"
#include <iostream>

Customer::Customer(std::string n, int a, std::string addr)
    : Person(n, a), address(addr) {}

void Customer::addOrder(Order o) {
    orders.push_back(o);  // Add the order to customer's order list
}

void Customer::displayInfo() {
    std::cout << "Customer: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    std::cout << "Orders: " << orders.size() << std::endl;
    for (auto& order : orders) {
        order.displayOrder();  // Communication: Display order details
    }
}
