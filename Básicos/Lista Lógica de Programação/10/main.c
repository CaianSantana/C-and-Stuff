/******************************************************************************

Converter um inteiro informado menor que 32 para sua representação em binário

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, binario[8];
    printf("Digite um inteiro menor ou igual a 32: ");
    scanf("%d",&numero);
    if(numero>32){
        return 1;
    }
    for(int i=0;i<8;i++){
        binario[i]=numero%2;
        numero/=2;
    }
    for(int i=7;i>=0;i--){
        printf("%d", binario[i]);
    }
    
    return 0;
}
