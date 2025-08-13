#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Lista {
	int dado;
	struct Lista *anterior;
	struct Lista *proximo;
} Lista;

Lista* start_list(int valor) {
	Lista *l = (Lista*) malloc (sizeof(Lista));
	if(l==NULL) {
		printf("FALHA");
		return NULL;
	}
	l->dado=valor;
	l->proximo = NULL;
	return l;
}

void insert(Lista *l, int valor) {
	while(l->proximo!=NULL) {
		printf("%d ", l->dado);
		l=l->proximo;
	}
	printf("%d \n", l->dado);
	l->proximo=start_list(valor);
	l->proximo->anterior=l;
}

void delete(Lista *l, int valor) {
	while(true) {
    	if(l->dado==valor){
    	    l->anterior->proximo= l->proximo;
    	    free(l);
    	    printf("Removendo o valor: %d\n", valor);
    	    return;
    	}
    	if(l->proximo==NULL) break;
    	l=l->proximo;
	}
	printf("Valor não encontrado.\n");
	return;
}

void print_list(Lista *l){
    while(true) {
        printf("%d ", l->dado);
        if(l->proximo==NULL) break;
    	l=l->proximo;
    }
    printf("\n");
}

int main()
{
	Lista *linked_list = start_list(0);
	for(int i=1; i<10; i++) {
		insert(linked_list, i);
	}
	delete(linked_list, 2);
	print_list(linked_list);
	delete(linked_list, 5);
	print_list(linked_list);
	return 0;
}
