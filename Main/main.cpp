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

    // Fichas:
    // 000 = libre
    // 001 = ficha 1
    // 010 = ficha 2
    // 011 = ficha 3
    // 100 = ficha 4
    // 101 = ficha 5
    // 110 = ficha 6
    // 111 = especial

    unsigned char* cintabytes;
    //Puntero que guardará la dirección de memoria de la cinta

    cantidad_bytes = (filas * columnas * 3 + 7) / 8;
    //posible funcion // Calculo de cuantos bytes necesitamos para guardar todas las fichas

    cintabytes = new unsigned char[cantidad_bytes]();
    //Reserva en memoria el espacio necesario para la cinta e inicializa los bytes en 0

    cintabytes[0] = 0b001<<5;
    for (int i = 7; i >= 0; i--)
    {
        cout << ((cintabytes[0] >> i) & 1);
    }
    cout << endl;

    cintabytes[0] |= 0b111<<2;
    for (int i = 7; i >= 0; i--)
    {
        cout << ((cintabytes[0] >> i) & 1);
    }
    cout << endl;

    delete[] cintabytes ;    //liberamos la memoria reservada para la cinta
    return 0;
}