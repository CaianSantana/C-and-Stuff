/******************************************************************************

Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
valor de temperatura em Fahrenheit e exibi-lo em Celsius 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temperatura_fahrenheit, temperatura_celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d",&temperatura_fahrenheit);
    temperatura_celsius=(temperatura_fahrenheit-32)*5/9;
    printf("Temperatura convertida para Celsius: %d", temperatura_celsius);
    return 0;
}
