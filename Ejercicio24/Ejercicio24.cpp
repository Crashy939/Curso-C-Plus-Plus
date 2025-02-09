/*Bloque 3. Estructuras Condicionales
**Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número entre (1 - 12),
**y mostrar el mes al que corresponde.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Ingresa un número entre 1 y 12: ");
    scanf("%i", &numero);
    switch(numero)
    {
        case 1:
            printf("El %i corresponde a Enero.\n", numero);
            break;
        case 2:
            printf("El %i corresponde a Febrero.\n", numero);
            break;
        case 3:
            printf("El %i corresponde a Marzo.\n", numero);
            break;
        case 4:
            printf("El %i corresponde a Abril.\n", numero);
            break;
        case 5:
            printf("El %i corresponde a Mayo.\n", numero);
            break;
        case 6:
            printf("El %i corresponde a Junio.\n", numero);
            break;
        case 7:
            printf("El %i corresponde a Julio.\n", numero);
            break;
        case 8:
            printf("El %i corresponde a Agosto.\n", numero);
            break;
        case 9:
            printf("El %i corresponde a Septiembre.\n", numero);
            break;
        case 10:
            printf("El %i corresponde a Octubre.\n", numero);
            break;
        case 11:
            printf("El %i corresponde a Noviembre.\n", numero);
            break;
        case 12:
            printf("El %i corresponde a Diciembre.\n", numero);
            break;
        default:
            printf("Lo siento, pero el número debe ser entre 1 y 12, intente de nuevo por favor.\n");
            break;           
    }
    return 0;
}