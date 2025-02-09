/*3. Realice un programa que lea un valor entero y determine si se trata de un número par **o impar.*/
#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese un n%cmero para determinar si es par o impar: ", 163);
    scanf("%i", &numero);
    if(numero % 2 == 0)
    {
        printf("El n%cmero es par.\n", 163);
    }
    else
    {
        printf("El n%cmero es impar.\n", 163);
    }

    return 0;
}