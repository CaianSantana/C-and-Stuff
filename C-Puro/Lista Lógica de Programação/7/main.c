/******************************************************************************

Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dias, idade[3];
    printf("Digite sua idade em dias: ");
    scanf("%d",&dias);
    idade[0]=dias/365; 
    int resto = dias%365;
    idade[1]=resto/30;
    idade[2]=resto%30;
    printf("Sua idade em anos: %d, meses: %d, dias: %d", idade[0], idade[1], idade[2]);
    return 0;
}
