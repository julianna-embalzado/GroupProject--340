#include "Shipping.h"
#include <iostream>

// Constructor
Shipping::Shipping(const std::string& estimatedArrival, const Customer& customerInfo,
                   const std::string& shippingType, const std::string& trackerNumber)
    : estimatedArrival(estimatedArrival), customerInfo(customerInfo),
      shippingType(shippingType), trackerNumber(trackerNumber) {}

// Getter for estimatedArrival
std::string Shipping::getEstimatedArrival() const {
    return estimatedArrival;
}

// Setter for estimatedArrival
void Shipping::setEstimatedArrival(const std::string& estimatedArrival) {
    this->estimatedArrival = estimatedArrival;
}

// Getter for customerInfo
Customer Shipping::getCustomerInfo() const {
    return customerInfo;
}

// Getter for shippingType
std::string Shipping::getShippingType() const {
    return shippingType;
}

// Setter for shippingType
void Shipping::setShippingType(const std::string& shippingType) {
    this->shippingType = shippingType;
}

// Getter for trackerNumber
std::string Shipping::getTrackerNumber() const {
    return trackerNumber;
}

// Setter for trackerNumber
void Shipping::setTrackerNumber(const std::string& trackerNumber) {
    this->trackerNumber = trackerNumber;
}

// Display shipping information
void Shipping::displayInfo() const {
    std::cout << "Shipping Info:" << std::endl;
    std::cout << "Estimated Arrival: " << estimatedArrival << std::endl;
    std::cout << "Customer Info: " << std::endl;
    customerInfo.displayInfo();
    std::cout << "Shipping Type: " << shippingType << std::endl;
    std::cout << "Tracking Number: " << trackerNumber << std::endl;
}
