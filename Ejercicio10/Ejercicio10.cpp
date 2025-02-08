/*Bloque 2. Expresiones
**Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la **nota final media de los cuatro alumnos.*/

#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, resultado;
    cout << "Escriba la primera nota: ";
    cin >> nota1;
    cout << "Escriba la segunda nota: ";
    cin >> nota2;
    cout << "Escriba la tercera nota: ";
    cin >> nota3;
    cout << "Escriba la cuarta nota: ";
    cin >> nota4;
    resultado = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "\nEl promedio de las cuatro notas es: " << resultado;
    return 0;
}