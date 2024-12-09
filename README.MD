
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
