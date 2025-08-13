#include <stdio.h>
#include <stdlib.h>

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
	l->proximo = NULL;
	return l;
}

void insert(Lista *l, int valor) {
	while(l->proximo!=NULL) {
		printf("%d ", l->dado);
		l=l->proximo;
	}
	printf("%d ", l->dado);
	printf("\n");
	l->proximo=start_list(valor);
}

void delete(Lista *l) {
	Lista *anterior;
	while(l->proximo!=NULL) {
		printf("%d ", l->dado);
		anterior=l;
		l=l->proximo;
	}
	free(anterior->proximo);
	anterior->proximo=NULL;
	printf("\n");
}

int main()
{
	Lista *linked_list = start_list(0);
	for(int i=1; i<10; i++) {
		insert(linked_list, i);
	}
	for(int i=1; i<10; i++) {
		delete(linked_list);
	}
	return 0;
}
