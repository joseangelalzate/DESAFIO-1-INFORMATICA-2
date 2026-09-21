#include <iostream>
#include "funciones.h"
#include <ctime>
using namespace std;


int main()
{

    srand ((unsigned int)time(0));
    int filas, columnas, cantidad_bytes, bit_inicial;


    cout<<"ingrese el numero de filas"<<endl;

    cin>>filas;


    cout<<"ingrese el numero de columnas"<<endl;
    cin>>columnas;
    int posicion;
    // posicion = filas* columnas+columna;


    cout<<"================================="<<endl;
    cout<<"     SWEET CRUSH JYL               "<<endl;
    cout<<"================================="<<endl;

    if (filas <= 0 || columnas <= 0)
    {
        cout<<"Dimensiones invalidas."<<endl;
        return 0;
    }


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


    //este tablero solo es un ejemplo grafico

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

            //bit_inicial = posicion * 3//obtener la posicion de la ficha en el tablero dentro de la cinta

            cout<<tablero[i][j] << " ";
        }
        cout <<endl;
    }



    for (int i = 0; i < filas; i++)
    {
        delete[] tablero[i];
    }

    delete[] tablero;

    //Reserva en memoria el espacio necesario para la cinta e inicializa los bytes en 0 con "()"


    delete[] cintabytes ;    //liberamos la memoria reservada para la cinta
    return 0;
}