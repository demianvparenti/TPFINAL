#pragma once
#include "animal.hpp"
#include <iostream>

class Chicken : public Animal {
private:
    std::string type;

public:
    Chicken(std::string id, std::string name, int price, std::string type);

    // Implement the pure virtual function
    void displayInfo() const override;

    std::string getType() const;
};