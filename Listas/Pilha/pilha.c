#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox; //Este é um ponteiro para outro nó do tipo struct No
} No;

No *criarNo(int valor){
    No* novo = (No*)calloc(1,sizeof(No));
    if (!novo){
        printf("Erro de alocação!\n");
        exit(1);
    }
    novo->dado = valor;
    return novo;
}

void push(No** topo, int valor){
    No* novo = criarNo(valor);
    novo->prox = *topo;
    *topo=novo;
    printf("Empilhado: %d\n", valor);
}

int pop(No** topo){
    if (*topo ==NULL){
        printf("Pilha vazia!\n");
        return -1;
    }

    No* temp = *topo;
    int valor = temp->dado;
    *topo = temp->prox;
    free(temp);
    printf("Desempilhado: %d\n", valor);
    return valor;
}

void mostrarPilha (No* topo){
    printf("Pilha: ");
    while (topo != NULL){
        printf("%d", topo->dado);
        topo = topo->prox;
    }
    printf("\n");
}

int main(){
    No* pilha = NULL;

    push(&pilha, 100);
    push(&pilha, 200);
    push(&pilha, 300);

    mostrarPilha(pilha);

    pop(&pilha);
    mostrarPilha (pilha);

    while (pilha != NULL){
        pop(&pilha);
    }

    system("pause");
    return 0;
}