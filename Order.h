#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "Customer.h"
#include "Shipping.h"
#include "Payment.h"

class Order {
private:
    int orderNumber;             // Unique order number
    std::string dateOrdered;     // Date the order was placed
    std::string orderStatus;     // e.g., Pending, Shipped, Delivered

    // Composition
    Customer customer;           // Associated customer
    Shipping shipping;           // Associated shipping details
    Payment payment;             // Associated payment details

public:
    // Constructor
    Order(int orderNumber, const std::string& dateOrdered, const std::string& orderStatus,
          const Customer& customer, const Shipping& shipping, const Payment& payment);

    // Getter and Setter for orderNumber
    int getOrderNumber() const;
    void setOrderNumber(int orderNumber);

    // Getter and Setter for dateOrdered
    std::string getDateOrdered() const;
    void setDateOrdered(const std::string& dateOrdered);

    // Getter and Setter for orderStatus
    std::string getOrderStatus() const;
    void setOrderStatus(const std::string& orderStatus);

    // Accessors for composed objects
    Customer getCustomer() const;
    Shipping getShipping() const;
    Payment getPayment() const;

    // Display order information
    void displayInfo() const;
};

#endif // ORDER_H
