// ItemNode.h
#ifndef ITEMNODE_H
#define ITEMNODE_H

#include "Item.h"

class ItemNode {
public:
    Item item;
    ItemNode* next;

    ItemNode(Item i);  // Constructor declaration
};

#endif
