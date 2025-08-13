/******************************************************************************

1. Dado o tamanho da base e da altura de um retângulo, 
calcular a sua área e o seu perímetro.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int base, altura;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a altura: ");
    scanf("%d", &altura);
    printf("Area: %d", base*altura);
    return 0;
}
