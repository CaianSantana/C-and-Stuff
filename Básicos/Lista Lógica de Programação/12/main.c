/******************************************************************************

Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para
Km/h. Para tal, multiplique o valor em m/s por 3,6.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float velocidade;
    printf("Digite a velocidade em m/s: ");
    scanf("%f",&velocidade);
    printf("Velocidade convertida: %.1f km/h", velocidade*3.6);

    return 0;
}
