/*La sentencia for:
    for(expr1; expresión lógica; expr2){
        conjunto de instrucciones;
    }
*/
#include<stdio.h> 
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%i ", i);
    }
    printf("\n");
    for(i = 10; i >= 1; i--)
    {
        printf("%i ", i);
    }
    printf("\n");
    getchar();
    return 0;
}