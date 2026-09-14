#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{

    int filas, columnas, cantidad_bytes;

    cout<<"ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"ingrese el numero de columnas"<<endl;
    cin>>columnas;
    unsigned char* cintabytes;
    //Puntero que guardará la dirección de memoria de la cinta

    cantidad_bytes = (filas * columnas * 3 + 7) / 8;
    //posible funcion // Calculo de cuantos bytes necesitamos para guardar todas las fichas

    cintabytes = new unsigned char[cantidad_bytes]();
    //Reserva en memoria el espacio necesario para la cinta e inicializa los bytes en 0

    delete[] cintabytes ;    //liberamos la memoria reservada para la cinta
    return 0;
}
