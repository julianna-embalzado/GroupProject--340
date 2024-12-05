#ifndef SHIPPING_H
#define SHIPPING_H

#include <string>
#include "Customer.h" // Assuming Customer provides customerInfo

class Shipping {
private:
    std::string estimatedArrival; // Estimated arrival date
    Customer customerInfo;        // Customer associated with the shipping
    std::string shippingType;     // e.g., Standard, Express, Overnight
    std::string trackerNumber;    // Tracking number

public:
    // Constructor
    Shipping(const std::string& estimatedArrival, const Customer& customerInfo,
             const std::string& shippingType, const std::string& trackerNumber);

    // Getter and Setter for estimatedArrival
    std::string getEstimatedArrival() const;
    void setEstimatedArrival(const std::string& estimatedArrival);

    // Getter for customerInfo
    Customer getCustomerInfo() const;

    // Getter and Setter for shippingType
    std::string getShippingType() const;
    void setShippingType(const std::string& shippingType);

    // Getter and Setter for trackerNumber
    std::string getTrackerNumber() const;
    void setTrackerNumber(const std::string& trackerNumber);

    // Display shipping information
    void displayInfo() const;
};

#endif // SHIPPING_H
