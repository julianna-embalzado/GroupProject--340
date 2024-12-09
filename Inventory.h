#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include "ItemNode.h"
#include <vector>
#include <string>

class Inventory {
private:
    ItemNode* head;

public:
    Inventory();
    void addItem(Item i);
    void displayInventory();
    
    // Function declarations (already present in the header)
    Item* searchItem(int id);  // Search for an item by ID
    void sortItems();          // Sort items by ID
};

#endif
