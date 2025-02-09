//3. Escribe la siguiente expresión como expresión en C++:

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado;
    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "Ingrese el tercer valor: ";
    cin >> c;
    cout << "Ingrese el cuarto valor: ";
    cin >> d;
    cout << "Ingrese el quinto valor: ";
    cin >> e;
    cout << "Ingrese el sexto valor: ";
    cin >> f;
    resultado = (a + b / c) / (d + e / f);
    cout << "\nEl resultado de la expresion es: " << resultado << endl; 
    return 0;
}