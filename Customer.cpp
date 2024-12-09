#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name, int age, std::string address)
    : Person(name, age) {
    this->address = address;
}
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
