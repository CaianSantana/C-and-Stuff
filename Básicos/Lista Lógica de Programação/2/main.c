/******************************************************************************

Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lado;
    printf("Digite o lado do quadrado: ");
    scanf("%d",&lado);
    printf("Area do quadrado: %d\n"
           "Perimetro do quadrado: %d", lado*lado, lado*4);

    return 0;
}
