#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>


typedef struct Lista {
	int dado;
	struct Lista *proximo;
} Lista;

Lista* start_list(int valor) {
	Lista *l = (Lista*) malloc (sizeof(Lista));
	if(l==NULL) {
		printf("FALHA");
		return NULL;
	}
	l->dado=valor;
	l->proximo = l;
	return l;
}

void insert(Lista *l, int valor) {
	Lista *primeiro=l;
	while(l->proximo!=primeiro) {
		printf("%d ", l->dado);
		l=l->proximo;
	}
	printf("%d \n", l->dado);
	l->proximo=start_list(valor);
	l=l->proximo;
	l->proximo=primeiro;
}

void delete(Lista **l, int valor) {
	Lista *primeiro=*l;
	Lista *anterior=*l;
	if((*l)->proximo==NULL || (*l)->proximo==*l) {
		printf("Lista vazia!\n");
		(*l)->dado=-1;
	}
	else if((*l)->proximo!=NULL) *l=(*l)->proximo;

	while(true) {
		if((*l)->dado==valor) {
			if((*l)==primeiro) primeiro=(*l)->proximo;
			anterior->proximo=(*l)->proximo;
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
	Lista *primeiro=l;
	int cont=0;
	while(true) {
		if(cont==0 && l==primeiro) cont++;
		else if(cont>0 && l==primeiro) break;
		if(l->dado==-1) break;
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
