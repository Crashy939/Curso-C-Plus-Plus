/*1. Introducción y entrada / salida
**Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe **los resultados. Por ejemplo, introduzca un dato de tipo entero cáracter cuando se **espera un dato de tipo entero.*/
#include <iostream>
using namespace std;
int main()
{
    int edad;
    char sexo[10];
    float altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo: ";
    cin >> sexo;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
    return 0;
}