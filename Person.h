// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a);  // Constructor declaration
    virtual void displayInfo() = 0; // Abstract method
};

#endif
