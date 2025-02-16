//7. Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n.
#include <stdio.h>
#include <locale.h>

int main()
{
    int n, suma = 0;
    printf("Ingrese el valor de n: ");
    scanf("%i", &n);
    if(n > 0)
    {
        for(int i = 0; i <= n; i++)
        {
            suma += i;
        }
    }
    else
    {
        printf("Lo siento, pero no se puede introducir valores menores o iguales a 0, intente de nuevo por favor.\n");
    }

    printf("La suma es: %i\n", suma);
    getchar();
    return 0;
}