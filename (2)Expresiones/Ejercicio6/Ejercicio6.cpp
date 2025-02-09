/*Bloque 2. Expresiones
**Ejercicio 2: Escribe la siguiente expresión matemática como expresión en C++.*/
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, resultado;
    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "Ingrese el tercer valor: ";
    cin >> c;
    cout << "Ingrese el cuarto valor: ";
    cin >> d;
    resultado = (a + b) / (c + d);
    cout << "El resultado de la expresion matematica es: " << resultado << endl;
    return 0;
}