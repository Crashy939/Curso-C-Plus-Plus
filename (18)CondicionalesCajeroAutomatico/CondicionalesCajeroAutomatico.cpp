#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int opc;
    float saldo = 1000.00f, ingreso;
    printf("\t------Bienvenido a su cajero virtual------\n");
    printf("1. Ingresar dinero en cuenta.\n");
    printf("2. Retirar dinero en cuenta.\n");
    printf("3. Consultar dinero en cuenta.\n");
    printf("4. Salir.\nOpción: ");
    scanf("%i", &opc);
    switch(opc)
    {
        case 1:
            printf("Ingrese cuanto dinero quiere en su cuenta: $");
            scanf("%f", &ingreso);
            saldo += ingreso;
            ingreso = 0;
            printf("Su saldo es: $%.2f.\n", saldo);
            break;
        case 2:
            printf("Ingrese cuanto dinero va a retirar: $");
            scanf("%f", &ingreso);
            if(ingreso < saldo)
            {
                saldo -= ingreso;
                ingreso = 0;
                printf("Su saldo es: $%.2f.\n", saldo);
            }
            else
            {
                printf("Lo siento, pero no puede retirar más dinero del que dispone, intente de nuevo por favor.\n");
            }
            break;
        case 3:
            printf("Su saldo es de: $%.2f.\n", saldo);
            break;
        case 4:
            printf("Que tenga un buen día :)\n");
            break;
        default:
            printf("Lo siento, pero debe elegir un número entre 1 y 4, intente de nuevo por favor.\n");
            break;
    }
    return 0;
}