/*Bloque 4. Estructuras repetitivas
**Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, **leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule **la temperatura media del día, la temperatura más alta y la más baja.*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    float temp, tempProm = 0, tempAlta = 0, tempBaja = 999;
    for(int i = 0; i < 24; i += 4)
    {
        printf("Ingresa la temperatura a las %i:00 horas: ", i);
        scanf("%f", &temp);
        tempProm += temp;
        if(tempAlta < temp)
            tempAlta = temp;
        if(tempBaja > temp)
            tempBaja = temp;
    }
    tempProm /= 6;
    printf("La temperatura media del día es: %.2f\nLa temperatura más alta fue: %.2f\nLa temperatura más baja fue: %.2f\n", tempProm, tempAlta, tempBaja);
    getchar();
    return 0;
}