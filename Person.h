#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    int id;
    std::string name;
    std::string email;

public:
    // Constructor
    Person(int id, const std::string& name, const std::string& email);

    // Virtual destructor
    virtual ~Person() = default;

    // Getter methods
    int getId() const;
    std::string getName() const;
    std::string getEmail() const;

    // Setter methods
    void setName(const std::string& name);
    void setEmail(const std::string& email);

    // Pure virtual function to make the class abstract
    virtual void displayInfo() const = 0;
};

#endif // PERSON_H
