#include "../include/chicken.hpp"
using namespace std;

Chicken::Chicken(string id, std::string name, int price, std::string type)
        : Animal(id, name, price), type(type) {}

void Chicken::displayInfo() const{
    std::cout << "Chicken - ID: " << id << ", Name: " << name 
                  << ", Price: " << price << ", Type: " << type << std::endl;
}

std::string Chicken::getType() const{
    return type;
}