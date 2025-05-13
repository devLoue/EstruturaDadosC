#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 5

typedef struct Fila{
    int *dados;
    int inicio;
    int fim;
    int capacidade
}Fila;

//Criar Fila
Fila* criarFila (int capacidade){
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->dados = (int*)malloc(capacidade *sizeof(int));
    fila->inicio = 0;
    fila->fim=0;
    fila->capacidade = capacidade;
    return fila;
}

//Está vazia?
int estaVazia(Fila *fila){
    return fila->inicio == fila->fim;
}

//Está cheia?
int estaCheia (Fila *fila){
    return fila->fim == fila->capacidade;
}

//Enfileirar (enqueue)
int enfileirar (Fila *fila, int valor){
    if (estaCheia(fila)){
        printf("Fila cheia! Não é possível enfileirar %d\n", valor);
        return;
    }
    fila->dados[fila->fim++] = valor;
    printf("Enfileirado: %d\n", valor);
}

int desenfileirar (Fila *fila){
    if (estaVazia(fila)){
        printf("Fila está vazia!\n");
        return -1;
    }
    int valor = fila->dados[fila->inicio++];
    printf("Desenfileirado: %d\n", valor);
    return valor;
}

void mostrarFila(Fila *fila){
    printf("Fila: ");
    for (int i = fila->inicio; i< fila->fim; i++){
        printf("%d", fila->dados[i]);
    }
    printf("\n");
}

void liberarFila(Fila *fila){
    free (fila->dados);
    free(fila);
}

int main(){
    Fila* fila = criarFila(TAMANHO_MAXIMO);

    enfileirar(fila, 10);
    enfileirar(fila, 23);
    enfileirar(fila, 35);
    mostrarFila(fila);

    desenfileirar(fila);
    mostrarFila(fila);

    enfileirar(fila, 40);
    enfileirar(fila, 50);
    enfileirar(fila, 60); // Fila cheia
    mostrarFila (fila);

    liberarFila(fila);
    return 0;
}