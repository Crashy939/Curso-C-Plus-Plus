/*1. Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y **muestre en la salida estándar su tabla de multiplicar.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a, i;

    do
    {
        printf("Ingrese un número válido del 1 al 10: ");
        scanf("%i", &a);
    } while ((a < 1) || (a > 10));  

    for(i = 1; i <= 20; i++)
    {
        printf("%i X %i = %i\n", a, i, a * i);
    }
    getchar();
    return 0;
}