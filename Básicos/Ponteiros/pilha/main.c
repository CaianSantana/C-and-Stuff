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
} Pilha;

Pilha* criar_pilha(){
    Pilha *p= (Pilha*) malloc (sizeof(Pilha));
    if(p==NULL) return NULL;
    
    p->dados = (int*) malloc (sizeof(int));
    if(p->dados==NULL){
        free(p);
        return NULL;
    }
    p->tamanho=0;
    return p;
}

void push(Pilha *p, int valor){
    p->dados = (int*) realloc (p->dados, sizeof(int) * (p->tamanho + 1));
    if(p->dados==NULL){
        printf("Falhou em alocar mais memória...");
        return;
    }
    p->dados[p->tamanho]=valor;
    p->tamanho++;
    return;
}
void pop(Pilha *p){
    if(p->tamanho<1){
        printf("Pilha zerada...\n");
        return;
    }
    p->dados = (int*) realloc (p->dados, sizeof(int) * (p->tamanho - 1));
    if(p->dados==NULL){
        printf("Pilha foi zerada...\n");
        p->tamanho=0;
        return;
    }
    p->tamanho--;
    return;
}
int top(Pilha *p){
    return p->dados[p->tamanho-1];
}

void print_stack(Pilha *p){
    for(int i=0; i<p->tamanho; i++){
        printf("%d ", p->dados[i]);
    }
    printf("\n");
}

int main()
{
    Pilha *stack = criar_pilha();

    printf("Topo: %d\n", top(stack));
    for(int i = 0; i<10; i++){
        push(stack,i);
        print_stack(stack);
    }
    for(int i = 0; i<10; i++){
        pop(stack);
        print_stack(stack);

    }
    return 0;
}
