/*

Exercício 2: Ligando, Desligando e Trocando Bits
Objetivo: Manipular bits específicos de um número utilizando os operadores OR (|), AND (&), NOT (~) e XOR (^).

Descrição: Crie três funções em C:

ligarBit: Recebe um número inteiro num e uma posição de bit pos. A função deve "ligar" (definir como 1) o bit na posição pos de num e retornar o novo valor.

desligarBit: Recebe um número inteiro num e uma posição de bit pos. A função deve "desligar" (definir como 0) o bit na posição pos de num e retornar o novo valor.

trocarBit: Recebe um número inteiro num e uma posição de bit pos. A função deve inverter o valor do bit na posição pos de num (de 0 para 1 ou de 1 para 0) e retornar o novo valor.


*/

#include <stdio.h>

unsigned short posToBit(unsigned short pos);
void ligarBit(unsigned short num, unsigned short pos);
void desligarBit(unsigned short num, unsigned short pos);
void trocarBit(unsigned short num, unsigned short pos);

int main(void){
    unsigned short num, pos;
    
    printf("Digite o numero e a posicao do bit: ");
    scanf("%hu%hu", &num, &pos);
    
    pos=posToBit(pos);
    ligarBit(num, pos);
    desligarBit(num, pos);
    trocarBit(num, pos);
    return 0;
}

unsigned short posToBit(unsigned short pos){
    printf("pos: %#x\n", 1 << pos);
    return 1 << pos;
}
    

void ligarBit(unsigned short num, unsigned short pos){
    printf("bit ligado: %hu\n", num | pos);
}
void desligarBit(unsigned short num, unsigned short pos){
    printf("bit desligado: %hu\n", num & ~pos);
}
void trocarBit(unsigned short num, unsigned short pos){
    printf("bit trocado: %hu\n", num ^ pos);
}