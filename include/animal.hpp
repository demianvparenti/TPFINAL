#pragma once
#include <iostream>

class Animal {
    protected:
        const std::string id;
        std::string name;
        int price;

    public:
        Animal(std::string id, std::string name, int price);
        virtual ~Animal() {}  // Virtual destructor for proper cleanup of derived classes

        // Getters
        std::string getID();
        std::string getName();
        int getPrice();

        // Pure virtual function (if you want to make Animal abstract)
        virtual void displayInfo() const = 0; // forces derived classes to implement
};