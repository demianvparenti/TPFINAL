#pragma once
#include "animal.hpp"
#include "client.hpp"

#include <string>

using namespace std;

class Order{
private:
    string id;
    Client* client;
    Animal* animals[3];  // Arreglo fijo de 3 punteros de tipo Article 
    int animalQty;        // Cantidad de articulos, variable que controlara el tamaño del arreglo

public:
    Order(string id, Client* client);

    string getID();
    void attachOrder(Animal* animals);
    void displayOrder();
};