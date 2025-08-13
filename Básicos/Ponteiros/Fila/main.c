/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *dados;
    int tamanho;
}Fila;

Fila* start_queue(){
    Fila *p = (Fila*) malloc (sizeof(Fila));
    if(p==NULL) return NULL;
    p->dados= (int*) malloc (sizeof(int));
    if (p->dados == NULL){
        free(p);
        return NULL;
    }
    p->tamanho=0;
    return p;
}

void enqueue(Fila *p, int valor){
    p->dados= (int*) realloc (p->dados, sizeof(int)*(p->tamanho+1));
    if (p->dados == NULL){
        printf("Falhou em alocar mais memória...\n");
        return;
    }
    p->dados[p->tamanho]=valor;
    p->tamanho++;
    printf("Valor entrando na fila: %d\n", valor);
    return;
}

void dequeue(Fila *p){
    if(p->tamanho<1){
        printf("Fila zerada...\n");
        return;
    }
    printf("Valor saindo da fila: %d\n", p->dados[0]);
    for(int i = 0; i<p->tamanho-1;i++){
        p->dados[i] = p->dados[i+1];
    }
    p->tamanho--;
    p->dados= (int*) realloc (p->dados, sizeof(int)*(p->tamanho));
    if(p->dados==NULL){
        printf("Fila foi zerada...\n");
        p->tamanho=0;
        return;
    }
    return;
}
void print_queue(Fila *p){
    for(int i=0; i<p->tamanho; i++){
        printf("%d ", p->dados[i]);
    }
    printf("\n");
}


int main()
{
    Fila *queue = start_queue();
    for(int i=0; i<100; i++){
        enqueue(queue, i);
        print_queue(queue);
    }
    for(int i=0; i<100; i++){
        dequeue(queue);
        print_queue(queue);
    }

    return 0;
}
