#include "Person.h"
#include <iostream>

// Constructor
Person::Person(int id, const std::string& name, const std::string& email)
    : id(id), name(name), email(email) {}

// Getter methods
int Person::getId() const {
    return id;
}

std::string Person::getName() const {
    return name;
}

std::string Person::getEmail() const {
    return email;
}

// Setter methods
void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setEmail(const std::string& email) {
    this->email = email;
}
