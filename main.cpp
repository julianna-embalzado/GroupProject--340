#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Order.h"
#include "BusinessWorker.h"
#include "Ship.h"
#include "Customer.h"

int main() {
    // 1. Testing Item creation and display
    Item item1(1, "Laptop", 999.99);
    Item item2(2, "Smartphone", 699.99);
    Item item3(3, "Headphones", 199.99);

    std::cout << "Testing Item Display:\n";
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();

    // 2. Testing Inventory functionality (adding items)
    Inventory inventory;
    inventory.addItem(item1);
    inventory.addItem(item2);
    inventory.addItem(item3);

    std::cout << "\nTesting Inventory Display:\n";
    inventory.displayInventory();  // Should display all items

    // 3. Testing Ship functionality
    Ship ship("SHIP001", "Port A");

    std::cout << "\nTesting Ship Info:\n";
    ship.displayShipInfo();  // Should display ship details

    // 4. Testing BusinessWorker with Ship (composition)
    BusinessWorker worker("Alice", 45, "Alice's Business", &ship);  // Pass ship as a pointer
    
    std::cout << "\nTesting BusinessWorker and Ship Communication:\n";
    worker.displayInfo();  // Should display BusinessWorker info and Ship details

    // 5. Testing Customer and Order functionality
    Customer customer("John Doe", 30, "123 Elm St");

    // Creating Orders for the Customer
    Order order1("ORD001");
    order1.addItem(item1);
    order1.addItem(item2);
    customer.addOrder(order1);

    Order order2("ORD002");
    order2.addItem(item3);
    customer.addOrder(order2);

    std::cout << "\nTesting Customer and Orders Communication:\n";
    customer.displayInfo();  // Should display Customer info and associated Orders

    // 6. Testing Communication between Order and Item
    std::cout << "\nTesting Order and Item Communication:\n";
    order1.displayOrder();  // Should display items in order1
    order2.displayOrder();  // Should display items in order2

    // 7. Testing Search in Inventory
    std::cout << "\nTesting Search for Item with ID 2 in Inventory:\n";
    Item* searchedItem = inventory.searchItem(2);
    if (searchedItem) {
        std::cout << "Found Item with ID 2: ";
        searchedItem->displayItem();
    } else {
        std::cout << "Item with ID 2 not found.\n";
    }

    // 8. Testing Sort in Inventory
    std::cout << "\nTesting Sorting Inventory:\n";
    inventory.sortItems();
    inventory.displayInventory();  // Should display items sorted by ID

    return 0;
}
