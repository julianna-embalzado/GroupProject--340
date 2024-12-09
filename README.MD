
---

## README: Explanation of Key Concepts

### 1. **Inheritance**

Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows one class (child class) to inherit the properties and methods of another class (parent class). 

In this project, we use **inheritance** to define the following relationships:

- **`Person` Class**: This is an abstract base class that holds common attributes like `name` and `age`. 
- **`BusinessWorker` and `Customer` Classes**: These are derived classes (child classes) that inherit from `Person`. They extend the `Person` class with their own specific attributes and methods. 
  - **`BusinessWorker`** adds a `businessName` and a `Ship` object (composition) to represent the worker's business and associated ship.
  - **`Customer`** adds an `address` and a collection of `Order` objects (composition) to represent the customer’s details and orders.

By using inheritance, we ensure that both `BusinessWorker` and `Customer` share common functionality (like `name` and `age` from `Person`), while each of them can extend the functionality to suit their needs.

### 2. **Polymorphism**

Polymorphism is an OOP principle that allows objects to be treated as instances of their parent class, while still exhibiting their specific behavior. This is typically implemented through **virtual functions** in C++.

In this project:
- The `Person` class has a **virtual method** `displayInfo()`. This method is overridden in both `BusinessWorker` and `Customer` to provide class-specific implementations.
  - **`BusinessWorker::displayInfo()`** displays the worker's name, age, business, and associated ship information.
  - **`Customer::displayInfo()`** displays the customer’s name, age, address, and all their orders.

When we call `displayInfo()` on a `Person` pointer or reference, the correct method (`BusinessWorker` or `Customer`) is invoked based on the actual object type, not the type of the reference or pointer. This is a key feature of polymorphism.

### 3. **Composition**

Composition is a design principle where one class contains an instance of another class to represent a "has-a" relationship. 

In this project:
- **`BusinessWorker`** has a `Ship` as part of its state, meaning a business worker "has a" ship. This is an example of **composition**.
  - When a `BusinessWorker` is created, a `Ship` object is passed to it, and the worker has ownership of the ship.
  
- **`Customer`** has multiple `Order` objects, meaning a customer "has many" orders. This is another example of **composition**.
  - Orders are added to a customer's order list, which can store many orders associated with that customer.

### 4. **Communication Between Classes**

Communication between objects is an essential aspect of OOP. In this project, objects communicate with each other by calling each other’s methods and sharing data.

Examples of communication:
- **`BusinessWorker` and `Ship`**: A `BusinessWorker` has a reference to a `Ship` object and can call `ship.displayShipInfo()` to display the ship's details.
- **`Customer` and `Order`**: A `Customer` can manage and display their orders by calling `order.displayOrder()` for each `Order` object in their list.

The methods in these classes use each other's methods to perform actions, demonstrating how objects interact and communicate in the system.

### 5. **Linked List and Node**

A **linked list** is a linear data structure where each element (called a node) contains data and a reference (or pointer) to the next node in the sequence. 

In this project:
- **`ItemNode`** is a class that represents a node in a linked list. Each `ItemNode` stores an `Item` and a pointer to the next node.
  - Each `ItemNode` contains:
    - An `Item` object.
    - A pointer (`next`) to the next `ItemNode` in the list.

- **`Inventory`** uses the linked list to store and manage items. The `addItem()` method inserts a new `ItemNode` at the beginning of the list, and the `displayInventory()` method traverses the linked list to display each item.

This data structure is efficient for managing collections of objects where frequent insertions and deletions are required, as these operations only require changing the pointers between nodes.

### 6. **Sort and Search Functions**

The **sort** and **search** functions are essential operations to find and organize data.

- **`Inventory::searchItem(int id)`**:
  - This method searches for an item in the inventory by its ID.
  - It traverses the linked list and checks each `ItemNode` to see if the `Item` has the matching ID. If found, it returns a pointer to the `Item`; otherwise, it returns `nullptr`.

  Example:
  ```cpp
  Item* Inventory::searchItem(int id) {
      ItemNode* temp = head;
      while (temp) {
          if (temp->item.id == id) {
              return &temp->item;  // Return item if found
          }
          temp = temp->next;
      }
      return nullptr;  // Return nullptr if item not found
  }
  ```

- **`Inventory::sortItems()`**:
  - This method sorts the items in the inventory based on their ID.
  - First, it copies the items from the linked list into a `std::vector`. Then it sorts the vector using `std::sort()` based on the `Item::id`. Finally, it rebuilds the linked list using the sorted items.

  Example:
  ```cpp
  void Inventory::sortItems() {
      if (!head || !head->next) {
          return;  // No need to sort if the list has 0 or 1 item
      }

      std::vector<Item> items;
      ItemNode* temp = head;
      
      // Transfer items to a vector
      while (temp) {
          items.push_back(temp->item);
          temp = temp->next;
      }

      // Sort the vector by item ID
      std::sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
          return a.id < b.id;
      });

      // Rebuild the linked list with sorted items
      temp = head;
      for (const Item& item : items) {
          temp->item = item;
          temp = temp->next;
      }
  }
  ```

  This function leverages the power of the `std::vector` for efficient sorting, and then reconstructs the linked list in the sorted order.
