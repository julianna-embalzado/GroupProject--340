#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person {
private:
    std::string address;

public:
    // Constructor
    Customer(int id, const std::string& name, const std::string& email, const std::string& address);

    // Getter and Setter for address
    std::string getAddress() const;
    void setAddress(const std::string& address);

    // Override the pure virtual function
    void displayInfo() const override;
};

#endif // CUSTOMER_H
