/******************************************************************************

Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
seu raio e sua altura

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int raio, altura;
    printf("Digite a altura da lata de óleo: ");
    scanf("%d",&altura);
    printf("Digite o raio da lata de óleo: ");
    scanf("%d",&raio);
    printf("Volume: %1.f", M_PI*(raio*raio)*altura);
    return 0;
}
