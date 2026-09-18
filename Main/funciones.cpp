#include "funciones.h"

//Para la memoria
int total_bytes(int filas, int columnas)
{
    int totalbits = filas * columnas * 3;

    return (totalbits + 7) / 8;
}

// para el tablero

unsigned char* armartablero( int filas, int columnas)
{
    int bytes = total_bytes(filas, columnas);

    unsigned char tablero;
    tablero = new unsigned char[bytes]();
    return tablero;
}

//ACA VAN LAS FUNCIONES COMPLETAS