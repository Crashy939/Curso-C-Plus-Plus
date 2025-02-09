//Escriba un programa que lea dos números y determine cual de ellos es el mayor.
#include <stdio.h>

int main()
{
    int x, y;
    printf("Ingresa dos n%cmeros: ", 163);
    scanf("%i%i", &x, &y);

    if(x == y)
    {
        printf("Ambos n%cmeros son iguales.\n", 163);
    }
    else
    {
        if(x > y)
        {
            printf("El mayor es: %i.\n", x);
        }
        else
        {
            printf("El mayor es: %i.\n", y);
        }
    }

    return 0;
}