/*9. Cambiar un número entero con el mismo valor pero en romanos.

    M = 1000
    D = 500
    C = 100
    L = 50
    X = 10
    V = 5
    I = 1
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero, unidades, decenas, centenas, millar;
    printf("Digíte un número: ");
    scanf("%i", &numero);
    //numero = 2152 -> 2000 + 100 + 50 + 2.
    unidades = numero % 10;
    numero /= 10; //unidades = 2, numero = 215
    
    decenas = numero % 10;
    numero /= 10; //decenas = 5, numero = 21

    centenas = numero % 10;
    numero /= 10; //centenas = 1, numero = 2

    millar = numero % 10;
    numero /= 10; //millar = 2, numero = 0

    switch(millar)
    {
        case 1: 
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MMM");
            break;
    }
    switch(centenas)
    {
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5: 
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }
    switch(decenas)
    {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5: 
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
    }
    switch(unidades)
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }
    return 0;
}