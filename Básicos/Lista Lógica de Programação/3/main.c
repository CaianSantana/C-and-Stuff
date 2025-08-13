/******************************************************************************

Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main()
{
    float raio;
    printf("Digite o raio de uma circunferência: ");
    scanf("%f", &raio);
    printf("Área da circunferência: %.1f\n"
           "Perímetro da circunferência: %.1f", M_PI*(raio*raio), 2 * M_PI * raio);
    
    return 0;
}
