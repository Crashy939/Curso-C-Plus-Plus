/*Bloque 4. Estructuras repetitivas
**Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros **positivos, sin utilizar la función pow.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, y, aux;
    printf("Introduce la base: ");
    scanf("%i", &x);
    printf("Introduce el exponente: ");
    scanf("%i", &y);
    aux = x;
    for(int i = 1; i < y; i++)
    {
        x *= aux;
    }
    printf("El resultado es: %i\n", x);
    getchar();
    return 0;
}