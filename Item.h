#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    int id;
    std::string name;

public:
    // Constructor
    Item(int id, const std::string& name);

    // Getter methods
    int getId() const;
    std::string getName() const;

    // Setter methods
    void setName(const std::string& name);

    // Display method
    void displayInfo() const;
};

#endif // ITEM_H
