/*1. Introducción y entrada / salida
**Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un **producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.*/
#include <iostream>
using namespace std;
int main()
{
    float precio, resultado;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    resultado = precio * 1.16;
    cout << "El precio total del producto es de: " << resultado << endl;
    return 0;
}