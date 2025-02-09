/* La sentencia if
    if(condición){
        Instrucciones1;
    }
    else{
        Instrucciones2;
    }
*/
#include <iostream>
using namespace std;

int main()
{
    int numero, dato = 5;
    cout << "Digita un numero: ";
    cin >> numero;
    //Comprueba si el valor de numero es igual al valor de dato.
    if(numero == dato)
    {
        cout << "El número es 5\n";
    }
    else
    {
        cout << "El número es diferente de 5\n";
    }
    //Comprueba si el valor de numero es mayor o igual al valor de dato.
    if(numero >= dato)
    {
        cout << "El número es mayor o igual a 5\n";
    }
    else
    {
        cout << "El número es menor a 5\n";
    }

    return 0;
}