/******************************************************************************

Dado os três lados de um triângulo determinar o perímetro do mesmo. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lados[3], perimetro =0;
    printf("Digite os lados do triangulo: \n");
    for(int i=0; i<3; i++){
        scanf("%d",&lados[i]);
        perimetro+=lados[i];
    }
    printf("Perimetro: %d", perimetro);
    return 0;
}
