/*5. Escriba un programa que lea de la entrada estándar un carácter e indique 
**en la salida estándar si el carácter es una vocal minúscula o no.*/
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
        default:
            printf("La letra ingresada no es una vocal minúscula.\n");
            break;
    }
    return 0;
}