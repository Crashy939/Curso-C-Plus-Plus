/*7. Escriba un programa que solicite una edad (un entero) e indique en la salida **estándar si la edad introducida está en el rango [18-25]*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");  
    int edad;
    printf("Introduce una edad: ");
    scanf("%i", &edad);
    if((edad >= 18) && (edad <= 25))
    {
        printf("La edad está en el rango de edad de 18 - 25 años.\n");
    }
    else
    {
        printf("La edad no está en el rango de edad de 18 - 25 años.\n");
    }
    return 0;
}