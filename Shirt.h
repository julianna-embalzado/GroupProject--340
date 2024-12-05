#ifndef SHIRT_H
#define SHIRT_H

#include "Item.h"
#include <string>

class Shirt : public Item {
private:
    std::string type; // e.g., T-shirt, Polo, Dress Shirt

public:
    // Constructor
    Shirt(int id, const std::string& name, const std::string& type);

    // Getter and Setter for type
    std::string getType() const;
    void setType(const std::string& type);

    // Override displayInfo method
    void displayInfo() const;
};

#endif // SHIRT_H
