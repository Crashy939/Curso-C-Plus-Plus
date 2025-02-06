#include <stdio.h>
int main()
{
    /*Una variable es un espacio en memoria donde se almacena un valor determinado, el operador de asignación toma dos operandos, donde el lado izquierdo es la variable y la derecha es el valor.*/
    int numero = 15;
    printf("%i\n", numero);

    float flotante = 10.45;
    printf("%.2f\n", flotante);
    
    double mayor = 16.3456;
    printf("%lf\n", mayor);

    char caracter = 'a';
    printf("%c\n", caracter);
    return 0;
}