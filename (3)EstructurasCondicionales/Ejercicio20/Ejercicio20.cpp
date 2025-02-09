/*Bloque 3. Estructuras Condicionales
**Escriba un programa que lea de la entrada estándar un carácter e indique en la salida **estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una **vocal.*/
#include <stdio.h>

int main()
{
    char letra;
    printf("Ingrese una vocal para determinar si es mayúscula o minúscula: ");
    scanf("%c", &letra);
    switch(letra)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("La vocal es minúscula.\n");
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("La vocal es mayúscula.\n");
            break;
        default:
            printf("La letra ingresada no es una vocal, intente de nuevo por favor.\n");
            break;
    }
    return 0;
}