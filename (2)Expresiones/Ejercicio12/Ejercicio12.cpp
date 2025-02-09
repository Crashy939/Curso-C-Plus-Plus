/*Bloque 2. Expresiones
**Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un **triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float c1, c2, h;
    cout << "Escribe el valor del primer cateto: ";
    cin >> c1;
    cout << "Escribe el valor del segundo cateto: ";
    cin >> c2;
    h = sqrt(pow(c1, 2)) + sqrt(pow(c2, 2));
    cout << "El valor de la hipotenusa es: " << h << endl;
    return 0;
}