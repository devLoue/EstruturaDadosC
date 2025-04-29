#include <stdio.h>
#include <stdlib.h>
#define MAX 5 

typedef struct{
	int dados[MAX];
	int tamanho;
}Lista;

void inicializar(Lista* l){
	l->tamanho = 0;
}

void inserir(Lista *l, int valor){
	if (l->tamanho < MAX){
		l->dados[l->tamanho] = valor;
		l->tamanho++;
	}else{
		printf("Lista cheia!\n");
	}
}

void imprimir(Lista* l){
	for (int i = 0; i< l->tamanho; i++){
		printf("%d", l->dados[i]);
	}
	printf("\n");
}

int main(){
	Lista lista;
	inicializar(&lista);
	inserir(&lista, 10);
	inserir(&lista, 20);
	inserir(&lista, 25);
	inserir(&lista, 30);
	inserir(&lista, 35);
	
	printf("Conteudo da lista:\n");
	imprimir(&lista);
	
	system("pause");
	
	return 0;
}