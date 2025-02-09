/*1. Escribe un programa que lea de la entrada estándar, dos números y muestre en la **salida estándar su suma, resta, multiplicación y división.*/
#include <iostream>

using namespace std;
int main()
{
    float numero1, numero2;
    cout << "Escribe el primer numero: ";
    cin >> numero1;
    cout << "Escribe el segundo numero: ";
    cin >> numero2;

    cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << endl;
    cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << endl;
    cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << endl;
    cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << endl;
    return 0;
}