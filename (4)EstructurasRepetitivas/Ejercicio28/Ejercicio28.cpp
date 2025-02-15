/*Bloque 4. Estructuras Repetitivas
**Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se **introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida **estándar el número de valores mayores que cero leídos.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero = 1, suma = 0, contador = 0;
    do
    {
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        suma += numero;
        printf("\nLa suma es: %d\n", suma);
        contador++;
    } while(numero != 0);
    printf("Número de intentos: %d\n", contador);
    printf("\n");
    getchar();
    return 0;
}