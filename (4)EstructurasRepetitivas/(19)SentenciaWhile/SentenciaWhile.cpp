/*La sentencia while:
    while(expresión lógica){
        conjunto de instrucciones;
    }
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i = 1;
    while(i <= 100)
    {
        printf("%i ", i);
        i++;
    }
    i = 100;
    printf("\n");
    while(i > 0)
    {
        printf("%i ", i);
        i--;
    }
    printf("\n");
    getchar();
    return 0;
}