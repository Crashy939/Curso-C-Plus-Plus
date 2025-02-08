//5. Escriba un fragmento de programa que intercambie los valores de dos variables.

#include <iostream>
using namespace std;

int main()
{
    int a, b, aux;
    cout << "Dame el valor de a: ";
    cin >> a;
    cout << "Dame el valor de b: ";
    cin >> b;

    cout << "Valor inicial de a: " << a << endl;
    cout << "Valor inicial de b: " << b << endl << endl;

    aux = a;
    a = b;
    b = aux;

    cout << "Valor final de a: " << a << endl;
    cout << "Valor final de b: " << b << endl;

    return 0;
}