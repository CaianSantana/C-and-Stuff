#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Lista {
	int dado;
	struct Lista *proximo;
	struct Lista *anterior;
} Lista;

Lista* start_list(int valor) {
	Lista *l = (Lista*) malloc (sizeof(Lista));
	if(l==NULL) {
		printf("FALHA");
		return NULL;
	}
	l->dado=valor;
	l->proximo = l;
	l->anterior = l;
	return l;
}

void insert(Lista *l, int valor) {
	Lista *primeiro=l;
	Lista *anterior;
	while(l->proximo!=primeiro) {
		printf("%d ", l->dado);
		l=l->proximo;
	}
	printf("%d \n", l->dado);
	l->proximo=start_list(valor);
	anterior=l;
	l=l->proximo;
	l->anterior=anterior;
	l->proximo=primeiro;
	primeiro->anterior=l;
}

void delete(Lista **l, int valor) {
	Lista *primeiro=*l;
	Lista *anterior=*l;
	if((*l)->proximo==*l) {
		free(*l);
		*l=NULL;
		return;
	}
	else if((*l)->proximo!=NULL) *l=(*l)->proximo;
	while(true) {
		if((*l)->dado==valor) {
			if((*l)==primeiro) primeiro=(*l)->proximo;
			anterior->proximo=(*l)->proximo;
			(*l)->anterior=anterior;
			if((*l)->proximo==*l) {
				return;
			}
			free(*l);
			*l=primeiro;
			return;
		}
		if((*l)==primeiro) {
			break;
		}
		anterior=*l;
		*l=(*l)->proximo;
	}
	*l=primeiro;
	return;
}

void print_list(Lista *l) {
	if(l==NULL) {
		printf("Lista vazia...\n");
		return;
	}
	Lista *primeiro=l;
	int cont=0;
	while(true) {
		if(cont==0 && l==primeiro) cont++;
		else if(cont>0 && l==primeiro) break;
		printf("%d ", l->dado);
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
	for(int i=0; i<=10; i+=2) {
		delete(&linked_list,i);
		print_list(linked_list);
	}
	for(int i=1; i<=10; i+=2) {
		delete(&linked_list,i);
		print_list(linked_list);
	}
	return 0;
}
