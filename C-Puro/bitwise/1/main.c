/*
Exercício 1: Par ou Ímpar?
Objetivo: Utilizar o operador AND (&) para verificar se um número é par ou ímpar.
*/ 


#include <stdio.h>


void verificaPar(unsigned short numero);

int main(void){
    unsigned short numero;
    printf("Digite um numero: ");
    if(!scanf("%hu", &numero))
        return 1;
    verificaPar(numero);
    printf("Numero digitado: %#x\n", numero);
    return 0;
}

void verificaPar(unsigned short numero){
    numero & 0x01 ? printf("Numero é impar\n") : printf("Numero é par\n");
}