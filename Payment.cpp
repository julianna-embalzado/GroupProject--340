#include "Payment.h"
#include <iostream>

// Constructor
Payment::Payment(const std::string& name, const std::string& cardType,
                 const std::string& cardNumber, const std::string& cvv,
                 const std::string& expDate)
    : name(name), cardType(cardType), cardNumber(cardNumber), cvv(cvv), expDate(expDate) {}

// Getter and Setter for name
std::string Payment::getName() const {
    return name;
}

void Payment::setName(const std::string& name) {
    this->name = name;
}

// Getter and Setter for cardType
std::string Payment::getCardType() const {
    return cardType;
}

void Payment::setCardType(const std::string& cardType) {
    this->cardType = cardType;
}

// Getter and Setter for cardNumber
std::string Payment::getCardNumber() const {
    return cardNumber;
}

void Payment::setCardNumber(const std::string& cardNumber) {
    this->cardNumber = cardNumber;
}

// Getter and Setter for cvv
std::string Payment::getCVV() const {
    return cvv;
}

void Payment::setCVV(const std::string& cvv) {
    this->cvv = cvv;
}

// Getter and Setter for expDate
std::string Payment::getExpDate() const {
    return expDate;
}

void Payment::setExpDate(const std::string& expDate) {
    this->expDate = expDate;
}

// Display payment information securely
void Payment::displayInfo() const {
    std::cout << "Payment Info:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Card Type: " << cardType << std::endl;
    std::cout << "Card Number: **** **** **** " << cardNumber.substr(cardNumber.length() - 4) << std::endl;
    std::cout << "Expiration Date: " << expDate << std::endl;
}
