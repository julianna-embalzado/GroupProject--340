#include "Inventory.h"
#include "ItemNode.h"
#include <iostream>
#include <algorithm>

Inventory::Inventory() : head(nullptr) {}

void Inventory::addItem(Item item) {
    ItemNode* newNode = new ItemNode(item);
    newNode->next = head;
    head = newNode;  // Insert at the beginning of the list
}

void Inventory::displayInventory() {
    ItemNode* temp = head;
    while (temp) {
        temp->item.displayItem();
        temp = temp->next;
    }
}

// Function to search an item by its ID
Item* Inventory::searchItem(int id) {
    ItemNode* temp = head;
    while (temp) {
        if (temp->item.id == id) {
            return &temp->item;  // Return the address of the item
        }
        temp = temp->next;
    }
    return nullptr;  // Return nullptr if item is not found
}

// Function to sort items by their ID
void Inventory::sortItems() {
    if (!head || !head->next) {
        return;  // No need to sort if the list has 0 or 1 item
    }

    std::vector<Item> items;
    ItemNode* temp = head;
    
    // Transfer all items to a vector
    while (temp) {
        items.push_back(temp->item);
        temp = temp->next;
    }

    // Sort the vector by item ID
    std::sort(items.begin(), items.end(), [](const Item& lhs, const Item& rhs) {
        return lhs.id < rhs.id;
    });

    // Rebuild the linked list with the sorted items
    temp = head;
    for (const Item& item : items) {
        temp->item = item;
        temp = temp->next;
    }
}
