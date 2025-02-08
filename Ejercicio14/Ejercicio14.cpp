/*Bloque 2. Expresiones
**Ejercicio 10: Escribe un programa que calcule las soluciones de una ecuación de segundo **grado de la forma ax^2+bx+c=0.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2;
    printf("Ingresa el valor de a: ");
    scanf("%f", &a);
    printf("Ingresa el valor de b: ");
    scanf("%f", &b);
    printf("Ingresa el valor de c: ");
    scanf("%f", &c);

    r1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    r2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("El resultado de x1 es: %.2f\n", r1);
    printf("El resultado de r2 es: %.2f\n", r2);
    return 0;
}