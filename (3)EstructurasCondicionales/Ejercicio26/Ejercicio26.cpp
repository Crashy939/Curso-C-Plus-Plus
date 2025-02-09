/*Bloque 3. Estructuras Condicionales
**Ejercicio 12: Hacer un programa que considere las siguientes opciones:
    Caso 1: Cubo de un número
    Caso 2: Número par o impar
    Caso 3: Salir.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int opc, numero, resultado;
    printf("\tMenú\n1. Cubo de un número\n2. Número par o impar\n3. Salir\nOpción: ");
    scanf("%i", &opc);
    switch(opc)
    {
        case 1:
            printf("Ingresa el número: ");
            scanf("%i", &numero);
            resultado = pow(numero, 3);
            printf("El resultado es: %i", resultado);
            break;
        case 2:
            printf("Ingresa el número: ");
            scanf("%i", &numero);
            if(numero == 0)
            {
                printf("El número es 0.\n");
            }
            else
            {
                if(numero % 2 == 0)
                {
                    printf("El número es par.\n");
                }
                else
                {
                    printf("El número es impar.\n");
                }
            }
            break;
        case 3: break;
        default:
            printf("Lo siento, pero debe elegir entre 1 y 3, intente de nuevo por favor.\n");
            break;
    }
    return 0;
}