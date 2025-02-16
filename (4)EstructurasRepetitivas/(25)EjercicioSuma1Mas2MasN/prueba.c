#include <stdio.h>

int main()
{
    int n, suma = 0;
    printf("Ingresa el valor de n: ");
    scanf("%i", &n);
    if(n > 0)
    {
        suma = (n * (n + 1)) / 2;
        printf("El resultado es: %i", suma);
    }
        
    else
        printf("Lo siento, pero n no puede ser menor o igual a 0, intente de nuevo por favor");
    getchar();
    return 0;
}