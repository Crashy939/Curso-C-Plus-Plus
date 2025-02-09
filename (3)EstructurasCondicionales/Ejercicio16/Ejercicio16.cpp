/*Bloque 3. Estructuras condicionales
**Escriba un programa que lea tres números y determine cuál de ellos es el mayor.*/
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Ingrese 3 n%cmeros: ", 163);
    scanf("%i%i%i", &x, &y, &z);
    if(x == y && x == z)
    {
        printf("Los 3 numeros son iguales.\n");
    }
    else if(x > y && x > z)
    {
        printf("El numero mayor es %i.\n", x);
    }
    else if(z > x && z > y)
    {
        printf("El numero mayor es: %i.\n", z);
    }
    else
    {
        printf("El numero mayor es: %i.\n", y);
    }
    printf("Presione una tecla para continuar . . .");
    getchar();
    return 0;
}