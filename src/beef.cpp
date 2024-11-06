#include "../include/beef.hpp"
using namespace std;

Beef::Beef(string id, std::string name, int price, std::string type)
            : Animal(id, name, price), type(type) {}

void Beef::displayInfo() const {
            std::cout << "Beef - ID: " << id << ", Name: " << name 
                    << ", Price: " << price << ", Type: " << type << std::endl;
}

std::string Beef::getType() const {
    return type;
}