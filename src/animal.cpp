#include "../include/animal.hpp"
using namespace std;

Animal::Animal(string id, string name, int price)
            : id(id), name(name), price(price) {}

string Animal::getID(){
    return id;
}

string Animal::getName(){
    return name;
}

int Animal::getPrice(){
    return price;
}