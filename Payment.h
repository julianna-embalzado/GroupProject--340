#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
private:
    std::string name;         // Name on the card
    std::string cardType;     // e.g., Visa, MasterCard
    std::string cardNumber;   // Card number
    std::string cvv;          // Card verification value
    std::string expDate;      // Expiration date in MM/YY format

public:
    // Constructor
    Payment(const std::string& name, const std::string& cardType,
            const std::string& cardNumber, const std::string& cvv,
            const std::string& expDate);

    // Getter and Setter for name
    std::string getName() const;
    void setName(const std::string& name);

    // Getter and Setter for cardType
    std::string getCardType() const;
    void setCardType(const std::string& cardType);

    // Getter and Setter for cardNumber
    std::string getCardNumber() const;
    void setCardNumber(const std::string& cardNumber);

    // Getter and Setter for cvv
    std::string getCVV() const;
    void setCVV(const std::string& cvv);

    // Getter and Setter for expDate
    std::string getExpDate() const;
    void setExpDate(const std::string& expDate);

    // Display payment information (securely)
    void displayInfo() const;
};

#endif // PAYMENT_H
