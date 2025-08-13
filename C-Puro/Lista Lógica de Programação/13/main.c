/******************************************************************************

Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
equivalente desse circuito. 
paralelo: 1/Req_paralelo = 1/R1 + 1/R2 + ... + 1/Rn
série: Req_total = R1 + R2 + ... + Rn. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float resistencias[4];
    printf("R1 e R2 estão em paralelo. R3 em série. Digite o valor das resistências: \n");
    for(int i=0;i<3;i++){
        scanf("%f",&resistencias[i]);
    }
    resistencias[3]=1/((1/resistencias[0])+(1/resistencias[1]))+resistencias[2];
    printf("Resistência total: %f", resistencias[3]);
    return 0;
}
