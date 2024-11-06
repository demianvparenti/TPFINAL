/*. Modularizar el Programa.
. Proteger contra Inclusiones Múltiples.
. Aplicar Espacios de Nombres.
. Aplica apropiadamente los conceptos de abstracción, encapsulación y ocultamiento de información.
. Realiza una apropiada distribución de responsabilidades entre las entidades del espacio de la solución.
.Desarrolla para reusar.
.Reusa apropiadamente las entidades desarrolladas en el espacio curricular.
. Demuestra un uso apropiado de la sintaxis y semántica del lenguaje de
programación C++.
Ukelele Chicken- Desarrollar un Programa:
1. Nuestro dominio de aplicación tiene que ver con la construcción de un sistema de software para una Boutique de Carnes en Santa
Clara del Mar “ukelele chicken” que vende carnes. EL grupo de Trabajo ha venido conversando en una sinergia mental y llega a la
conclusión de la trivia publicada anteriormente, basado en el diagrama de Clases que han generado y mejorándolo:
a. Desarrollar las Clases en C++
b. Que realice la Herencia solicitada
c. Discriminar las Abstractas de las Reales
d. Escribir métodos en las Clases Abstractas que sean comunes a los animales
e. Que separe “Interfaz” de “Implementación” en código, modularizándolo.
f. Que permita por menú elegir en tiempo de ejecución el “Tipo” de Objeto.
g. Que permita cargar 5 productos, 3 clientes y 2 pedidos, Implementando “Arrays” para almacenar la
Información de las Colecciones.
h. Que Implemente métodos “Virtuales Puros” la clase “Base”
i. Que permita llamar de forma “Genérica” los métodos sin importar el tipo de objeto del que se trate.
j. Que se Implemente con Punteros del tipo “Animal” apuntando a las clases derivadas
k. Que recorra el Arrays ejecutando el método “Comer” o “Dormir” usando Polimorfismo
(Implementando Herencia y Métodos virtuales)
l. Debe compilar y ejecutarse sin errores.*/
#include <iostream>

#include "include/animal.hpp"
#include "include/beef.hpp"
#include "include/chicken.hpp"
#include "include/client.hpp"
#include "include/order.hpp"

int main(){
    Animal* article1 = new Beef("B001", "Roast Beef", 7159.99, "Corte de Carne");
    Animal* article2 = new Beef("B002", "Milanesa de Carne", 6000.00, "Preparado");
    Animal* article3 = new Chicken("C001", "Pechuga", 4500.50, "Corte de Pollo");
    Animal* article4 = new Chicken("C002", "Milanesa de Pollo", 5500.00, "Preparado");
    Animal* article5 = new Chicken("C003", "Pata y Muslo", 3700.00, "Corte de Pollo");

    Client* client1 = new Client("mariagomez", "Maria Gomez");
    Client* client2 = new Client("joseperez", "Jose Perez");
    Client* client3 = new Client("juanrodriguez", "Juan Rodriguez");

    Order* orderclient1 = new Order("P001", client1);
    orderclient1->attachOrder(article1);
    orderclient1->attachOrder(article2);
    orderclient1->attachOrder(article3);

    Order* orderclient2 = new Order("P002", client2);
    orderclient2->attachOrder(article4);
    orderclient2->attachOrder(article5);
           
    cout << "*********************************" << endl;
    cout << "MENU DE LA GRANJA UKELELE CHICKEN" << endl;
    cout << "*********************************" << endl;
    cout << endl;
    cout << "LISTA DE PEDIDOS:" << endl;
    cout << endl;
        
    orderclient1->displayOrder();
    orderclient2->displayOrder();

    delete article1;
    delete article2;
    delete article3;
    delete article4;
    delete article5;
    delete client1;
    delete client2;
    delete client3;
    delete orderclient1;
    delete orderclient2;
        
    return 0;
}