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



    int** tablero; //puntero del tablero

    tablero = new int*[filas]; //reservamos memoria para la cantidad de filas

    for (int i = 0; i < filas; i++)
    {
        tablero[i] = new int[columnas](); //reservamos memoria para la cantidad de columnas
    }


    for (int i = 0; i < filas; i++)  //bucle para recorrer el tablero
    {
        for (int j = 0; j < columnas; j++)
        {
            // aquí trabajamos con el tablero[i][j]

        cout << tablero[i][j] << " ";
        }
        cout <<endl;
    }



    for (int i = 0; i < filas; i++)
    {
        delete[] tablero[i];
    }

    delete[] tablero;

    delete[] cintabytes ;    //liberamos la memoria reservada para la cinta
    return 0;
}