/*7. La calificación final de un estudiante es la media ponderada de tres notas:
**La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y **la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la **entrada estándar las 3 notas de un alumno y escriba en la salida estándar su nota **final*/
#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, notafinal;
    cout << "Escriba la primera nota (practicas): ";
    cin >> nota1;
    cout << "Escriba la segunda nota (teorica): ";
    cin >> nota2;
    cout << "Escriba la tercera nota (participacion): ";
    cin >> nota3;

    nota1 *= 0.3;
    nota2 *= 0.6;
    nota3 *= 0.1;

    notafinal = nota1 + nota2 + nota3;
    cout << "La nota final es: " << notafinal;
    return 0;
}