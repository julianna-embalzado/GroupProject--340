#ifndef CLOTHES_H
#define CLOTHES_H

#include "Item.h"
#include <string>

class Clothes : public Item {
private:
    std::string size;
    std::string color;

public:
    // Constructor
    Clothes(int id, const std::string& name, const std::string& size, const std::string& color);

    // Getter and Setter for size
    std::string getSize() const;
    void setSize(const std::string& size);

    // Getter and Setter for color
    std::string getColor() const;
    void setColor(const std::string& color);

    // Override displayInfo method
    void displayInfo() const;
};

#endif // CLOTHES_H
