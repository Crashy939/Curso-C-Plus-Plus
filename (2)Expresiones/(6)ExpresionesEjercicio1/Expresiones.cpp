//1. Escribe la siguiente expresión como expresión en C++: 
#include <iostream>
using namespace std;
int main()
{   
    float a, b, resultado = 0;
    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese otro valor: ";
    cin >> b;
    resultado = a / b + 1;
    cout.precision(3);
    cout << "\nEl resultado de la expresion es: " << resultado << endl;
    return 0;
}