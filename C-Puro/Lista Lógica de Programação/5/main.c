/******************************************************************************

Ler um número inteiro e exibir o seu sucessor
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Sucessor: %d", numero+1);
    
    return 0;
}
