
---

## README: Key Concepts in Code

### 1. **Inheritance**

- **`Person` Class**: Abstract base class with common attributes like `name` and `age`.
- **`BusinessWorker` and `Customer` Classes**: Derived from `Person`, with additional attributes and methods:
  - **`BusinessWorker`**: Inherits from `Person` and adds `businessName` and a `Ship` object.
  - **`Customer`**: Inherits from `Person` and adds `address` and a collection of `Order` objects.

### 2. **Polymorphism**

- **`displayInfo()`**: Virtual method in `Person`, overridden in `BusinessWorker` and `Customer`:
  - **`BusinessWorker::displayInfo()`**: Displays worker details and associated `Ship` info.
  - **`Customer::displayInfo()`**: Displays customer details and associated `Order` objects.

### 3. **Composition**

- **`BusinessWorker`**: Contains a `Ship` object (composition), representing the "has-a" relationship.
- **`Customer`**: Contains a collection of `Order` objects, representing a "has-many" relationship.

### 4. **Communication Between Classes**

- **`BusinessWorker` and `Ship`**: `BusinessWorker` communicates with `Ship` via `ship.displayShipInfo()`.
- **`Customer` and `Order`**: `Customer` communicates with `Order` via `order.displayOrder()`.

### 5. **Linked List and Node**

- **`ItemNode`**: Represents a node in a linked list, containing an `Item` and a pointer to the next node.
- **`Inventory`**: Uses a linked list to manage `ItemNode` objects. Methods like `addItem()` and `displayInventory()` operate on the linked list.

### 6. **Sort and Search Functions**

- **`Inventory::searchItem(int id)`**: Searches for an `Item` in the linked list by `id` and returns a pointer to the item if found.
- **`Inventory::sortItems()`**: Sorts the `Item` objects in the linked list by their `id`, using `std::vector` for sorting and rebuilding the list.

---

### **`main.cpp` Breakdown:**

```cpp
#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Order.h"
#include "BusinessWorker.h"
#include "Ship.h"
#include "Customer.h"
```

### **Lines that use each header:**

---

1. **`#include "Item.h"`**
   - **Used by:**
     - **`Item` class constructor**: This is used to define an `Item` object in `main.cpp`.
     - **Example:**
       ```cpp
       Item item1(1, "Laptop", 999.99);
       Item item2(2, "Smartphone", 699.99);
       Item item3(3, "Headphones", 199.99);
       ```
     - **Used by `displayItem()`**: The `displayItem()` method is called to display the item details.
       ```cpp
       item1.displayItem();
       item2.displayItem();
       item3.displayItem();
       ```

---

2. **`#include "ItemNode.h"`**
   - **Used by:**
     - **`Inventory` class**: The `Inventory` class creates and uses `ItemNode` objects to store items in a linked list.
     - **Example:**
       ```cpp
       ItemNode* newNode = new ItemNode(i);  // This is in the Inventory::addItem method
       ```
     - This line is inside the **`addItem()`** function of the `Inventory` class, which is called in `main.cpp` to add items to the inventory.

---

3. **`#include "Inventory.h"`**
   - **Used by:**
     - **`Inventory` class**: The `Inventory` class manages the linked list of items, using `ItemNode` to store each `Item`.
     - **Example:**
       ```cpp
       Inventory inventory;
       inventory.addItem(item1);
       inventory.addItem(item2);
       inventory.addItem(item3);
       inventory.displayInventory();
       ```
     - The `Inventory` class is used to add items, search for items, and display the inventory in `main.cpp`.

---

4. **`#include "Order.h"`**
   - **Used by:**
     - **`Order` class**: The `Order` class is used to represent customer orders, storing a list of items.
     - **Example:**
       ```cpp
       Order order1("ORD001");
       order1.addItem(item1);
       order1.addItem(item2);
       customer.addOrder(order1);
       ```
     - The `Order` object is used to add `Item` objects to a customer's order list.

---

5. **`#include "BusinessWorker.h"`**
   - **Used by:**
     - **`BusinessWorker` class**: The `BusinessWorker` class is used to represent a business worker, which includes a `Ship` (composition) and other worker-related information.
     - **Example:**
       ```cpp
       BusinessWorker worker("Alice", 45, "Alice's Business", &ship);
       worker.displayInfo();  // This calls BusinessWorker's displayInfo() method
       ```
     - The `BusinessWorker` object is created with the worker's name, age, business name, and a `Ship`.

---

6. **`#include "Ship.h"`**
   - **Used by:**
     - **`Ship` class**: The `Ship` class is used to represent a ship that a `BusinessWorker` might have.
     - **Example:**
       ```cpp
       Ship ship("SHIP001", "Port A");
       ship.displayShipInfo();  // This displays the ship's info
       ```
     - The `Ship` object is created and passed to the `BusinessWorker` constructor. The `displayShipInfo()` method is called to show ship details.

---

7. **`#include "Customer.h"`**
   - **Used by:**
     - **`Customer` class**: The `Customer` class is used to represent a customer who can have multiple orders.
     - **Example:**
       ```cpp
       Customer customer("John Doe", 30, "123 Elm St");
       customer.displayInfo();  // This displays the customer's information
       ```
     - The `Customer` object holds customer information like `name`, `age`, and `address`, and can store and display their orders.

---

### Summary of how headers are used in `main.cpp`:

- **`Item.h`** is used when creating `Item` objects and calling `displayItem()`.
- **`ItemNode.h`** is used indirectly when `Inventory` adds items using `ItemNode` objects in the linked list.
- **`Inventory.h`** is used to create an `Inventory` object and call its methods like `addItem()` and `displayInventory()`.
- **`Order.h`** is used to create `Order` objects, add items to orders, and display orders.
- **`BusinessWorker.h`** is used to create a `BusinessWorker` object, which also uses a `Ship` object.
- **`Ship.h`** is used to create `Ship` objects and call their methods like `displayShipInfo()`.
- **`Customer.h`** is used to create `Customer` objects, manage and display customer orders.

### Sample Output:

Testing Item Display:
ID: 1, Name: Laptop, Price: 999.99
ID: 2, Name: Smartphone, Price: 699.99
ID: 3, Name: Headphones, Price: 199.99

Testing Inventory Display:
ID: 3, Name: Headphones, Price: 199.99
ID: 2, Name: Smartphone, Price: 699.99
ID: 1, Name: Laptop, Price: 999.99

Testing Ship Info:
Ship ID: SHIP001, Location: Port A

Testing BusinessWorker and Ship Communication:
Business Worker: Alice, Age: 45, Business: Alice's Business
Ship ID: SHIP001, Location: Port A

Testing Customer and Orders Communication:
Customer: John Doe, Age: 30, Address: 123 Elm St
Orders: 2
Order ID: ORD001
ID: 1, Name: Laptop, Price: 999.99
ID: 2, Name: Smartphone, Price: 699.99
Order ID: ORD002
ID: 3, Name: Headphones, Price: 199.99

Testing Order and Item Communication:
Order ID: ORD001
ID: 1, Name: Laptop, Price: 999.99
ID: 2, Name: Smartphone, Price: 699.99
Order ID: ORD002
ID: 3, Name: Headphones, Price: 199.99

Testing Search for Item with ID 2 in Inventory:
Found Item with ID 2: ID: 2, Name: Smartphone, Price: 699.99

Testing Sorting Inventory:
ID: 1, Name: Laptop, Price: 999.99
ID: 2, Name: Smartphone, Price: 699.99
ID: 3, Name: Headphones, Price: 199.99
