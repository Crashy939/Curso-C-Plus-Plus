/*La sentencia switch
    switch(expresion){
    case literal1:
        Conjunto de instrucciones1;
        break;
    case literal2:
        Conjunto de instrucciones2;
        break;
    case literaln:
        Conjunto de instruccionesn;
        break;
    default:
        Conjunto de instrucciones por defecto
        break;
    }
*/
#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese un n%cmero entre 1 - 5: ", 163);
    scanf("%i", &numero);
    switch(numero)
    {
        case 1:
            printf("El n%cmero ingresado es 1.\n", 163);
            break;
        case 2:
            printf("El n%cmero ingresado es 2.\n", 163);
            break;
        case 3:
            printf("El n%cmero ingresado es 3.\n", 163);
            break;
        case 4:
            printf("El n%cmero ingresado es 4.\n", 163);
            break;
        case 5:
            printf("El n%cmero ingresado es 5.\n", 163);
            break;
        default:
            printf("Lo siento, pero debe elegir un n%cmero entre 1 y 5, intente de nuevo por favor.\n", 163);
            break;
    }
    return 0;
}