/*La sentencia do while:
    do{
        conjunto de instrucciones;
    } while(expresión lógica);
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    int i = 1;
    do
    {
        printf("%i ", i);
        i++;
    }
    while (i <= 10);
    getchar();
    return 0;
}