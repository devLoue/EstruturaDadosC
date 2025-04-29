#include <stdio.h>
#include <stdlib.h>


//Estrutura do nó
typedef struct No {
	int valor;
	struct No* prox;
} No;

//Função para criar um novo nó
No* novoNo(int valor){
	No* no  = (No*)malloc(sizeof(No));
	no->valor = valor;
	no->prox = NULL;
	return no;
}

void inserirOrdenado (No** inicio, int valor){
	No* no = novoNo(valor);
	
	if (*inicio == NULL || valor < (*inicio) ->valor){
		no->prox = *inicio;
		*inicio = no;
		return;
	}
	
	No* atual = *inicio;
	while (atual ->prox != NULL && atual->prox->valor < valor){
		atual = atual->prox;
	}
	
	no->prox = atual->prox;
	atual->prox = no;
}

void imprimirLista (No* inicio){
	No* atual = inicio;
	while (atual != NULL){
		printf("%d", atual->valor);
		atual = atual->prox;
	}
	printf("\n");
}

void liberarLista (No* inicio){
	No* atual = inicio;
	while (atual != NULL){
		No* temp = atual;
		atual = atual->prox;
		free(temp);
	}
}

int main(){
	No* lista = NULL;
	
	inserirOrdenado(&lista, 30);
	inserirOrdenado(&lista, 10);
	inserirOrdenado(&lista, 20);
	inserirOrdenado(&lista, 5);
	inserirOrdenado(&lista, 40);
	
	printf("Lista encadeada ordenada: \n");
	imprimirLista (lista);
	
	system("pause");
	
	liberarLista(lista);
	
	
	
	
	
	
	return 0;
}