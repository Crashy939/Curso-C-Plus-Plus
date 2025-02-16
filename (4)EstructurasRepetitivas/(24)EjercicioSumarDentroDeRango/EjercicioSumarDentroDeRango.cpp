/*5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el **rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los **valores mayores a 0 introducidos.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero, suma = 0;
    do
    {
        printf("Introduce un número: ");
        scanf("%d", &numero);
        if((numero > 0))
            suma += numero;
    }
    while(((numero < 20) || (numero > 30)) && (numero != 0));
    printf("La suma total de los números fue: %d\n", suma);
    getchar();
    return 0;
}