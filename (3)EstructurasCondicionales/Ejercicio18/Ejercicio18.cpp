/*Bloque 3. Estructuras Condicionales
**Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo.*/
#include <stdio.h>

int main()
{
    int numero;
    printf("Ingresa un n%cmero para determinar si es positivo o negativo: ", 163);
    scanf("%i", &numero);
    if(numero == 0)
    {
        printf("El n%cmero es 0.\n", 163);
    }
    else
    {
        if(numero > 0)
        {
            printf("El n%cmero es positivo.\n", 163);
        }
        else
        {
            printf("El n%cmero es negativo.\n", 163);
        }
    }
    return 0;
}