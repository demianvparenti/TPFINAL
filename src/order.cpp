#include "../include/order.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Order::Order(string id, Client* client)
    : id(id), client(client), animalQty(0) {}

string Order::getID(){
    return id;
}

void Order::attachOrder(Animal* animal) {
    if (animalQty < 3) {        // chequeamos que el pedido no este lleno
        animals[animalQty] = animal;  // agregamos el articulo
        animalQty++;                     // aumentamos la cantidad de articulos   
    } else {
        cout << "Error: No se pueden agregar más artículos. El pedido está lleno." << endl;
    }
}

void Order::displayOrder() {
    cout << "Pedido: " << id << endl;
    cout << "Cliente: " << client->getUsername() << " (" << client->getName() << ")" << endl;
    cout << "Articulos:" << endl;

    double finalPrice = 0.0;

    for (int i = 0; i < animalQty; ++i) {
        if (animals[i] != nullptr) {
            double price = animals[i]->getPrice();  // Get the price of the current animal
            finalPrice += price;  // Add to total price
            cout << "  - " << animals[i]->getName() << " (" << animals[i]->getID() << ") - $" 
                 << fixed << setprecision(2) << animals[i]->getPrice() << endl;
        }
    }
    cout << "Precio total: $" << fixed << setprecision(2) << finalPrice << endl;  // Display the total price
    cout << endl;
    cout << "............................................" << endl;
    cout << endl;
}
