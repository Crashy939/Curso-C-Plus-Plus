/*3. Realice un programa que calcule y muestre en la salida estándar la suma de los **cuadrados de los 10 primeros enteros mayores que cero.*/
#include <stdio.h>
int main()
{
    int cuadrado = 0, potencia;
    for(int i = 1; i <= 10; i++)
    {
        potencia = i * i;
        cuadrado += potencia;
    }
    printf("Resultado: %d\n", cuadrado);
    getchar();
    return 0;
}