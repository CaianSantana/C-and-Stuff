/******************************************************************************

Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[2];
    printf("Digite dois numeros inteiros: \n");
    for(int i=0; i<2;i++){
        scanf("%d", &numeros[i]);
    }
    printf("quociente: %d\n"
           "resto: %d", numeros[0]/numeros[1], numeros[0]%numeros[1]);
    return 0;
}
