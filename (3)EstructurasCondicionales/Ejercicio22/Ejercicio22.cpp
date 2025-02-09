/*Bloque 3. Estructuras Condicionales
**Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después **debe leer un cuarto número e indicar si el número coincide con alguno de los **introducidos con anterioridad.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3, n4;
    printf("Ingresa cuatro números: ");
    scanf("%i%i%i%i", &n1, &n2, &n3, &n4);
    if((n1 == n4) || (n2 == n4) || (n3 == n4))
    {
        printf("El número %i coincide con uno de los números anteriores.\n", n4);
    }
    else
    {
        printf("El número %i no coincide con ninguno de los números anteriores.\n", n4);
    }
    return 0;
}