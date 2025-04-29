#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

typedef struct {
	int dados[MAX];
	int topo;
} Pilha;

void inicializar(Pilha *p){
	p->topo = -1;
}

bool estaVazia (Pilha *p){
	return p->topo == -1;
}

bool estaCheia (Pilha *p){
	return p->topo == MAX -1;
}

bool push(Pilha *p, int valor){
	if (estaCheia (p)) {
		printf("Erro: Pilha cheia!\n");
		return false;
	}
	p->dados[++(p->topo)] =valor;
	return true; 
}

int pop(Pilha *p){
	if (estaVazia (p)){
		printf("Erro: Pilha vazia!\n");
		return -1;
	}
	return p->dados[(p->topo)--];
}

int topo (Pilha *p){
	if (estaVazia (p)){
		printf("Erro: Pilha vazia\n");
		return -1;
	}
	return p->dados [(p ->topo)--];
}

void imprimir(Pilha *p){
	if (estaVazia (p)){
		printf("Pilha vazia. \n");
		return;
	}
	
	printf("Pilha (topo -> base) : ");
	for (int i = p->topo; i >= 0; i--){
		printf("%d", p->dados [i]);
	}
	printf("\n");
}

int main(){
	Pilha pilha;
	inicializar (&pilha);
	
	push(&pilha, 10);
	push(&pilha, 20);
	push(&pilha, 30);
	
	imprimir (&pilha);
	system("pause");
	
	printf("Topo da pilha: %d\n", topo(&pilha));
	printf("Removendo: %d\n", pop(&pilha));
	imprimir(&pilha);
	
	system("pause");
	
	return 0;
}

