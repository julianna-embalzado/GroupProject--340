#include "Order.h"
#include <iostream>

// Constructor
Order::Order(int orderNumber, const std::string& dateOrdered, const std::string& orderStatus,
             const Customer& customer, const Shipping& shipping, const Payment& payment)
    : orderNumber(orderNumber), dateOrdered(dateOrdered), orderStatus(orderStatus),
      customer(customer), shipping(shipping), payment(payment) {}

// Getter and Setter for orderNumber
int Order::getOrderNumber() const {
    return orderNumber;
}

void Order::setOrderNumber(int orderNumber) {
    this->orderNumber = orderNumber;
}

// Getter and Setter for dateOrdered
std::string Order::getDateOrdered() const {
    return dateOrdered;
}

void Order::setDateOrdered(const std::string& dateOrdered) {
    this->dateOrdered = dateOrdered;
}

// Getter and Setter for orderStatus
std::string Order::getOrderStatus() const {
    return orderStatus;
}

void Order::setOrderStatus(const std::string& orderStatus) {
    this->orderStatus = orderStatus;
}

// Getter for customer
Customer Order::getCustomer() const {
    return customer;
}

// Getter for shipping
Shipping Order::getShipping() const {
    return shipping;
}

// Getter for payment
Payment Order::getPayment() const {
    return payment;
}

// Display order information
void Order::displayInfo() const {
    std::cout << "Order Info:" << std::endl;
    std::cout << "Order Number: " << orderNumber << std::endl;
    std::cout << "Date Ordered: " << dateOrdered << std::endl;
    std::cout << "Order Status: " << orderStatus << std::endl;
    std::cout << "Customer Info:" << std::endl;
    customer.displayInfo();
    std::cout << "Shipping Info:" << std::endl;
    shipping.displayInfo();
    std::cout << "Payment Info:" << std::endl;
    payment.displayInfo();
}
