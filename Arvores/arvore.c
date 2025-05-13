#include <stdio.h>
#include <stdlib.h>


//Estrutura
struct Node {
    int valor;
    struct Node *esquerda;
    struct Node *direita;
};


//Função criar nó
struct Node* novoNo(int valor){
    struct Node* no = (struct Node*) malloc(sizeof(struct Node));
    no->valor = valor;
    no->esquerda = NULL;
    no ->direita=NULL;
    return no;
}

//Inserir um valor na árvore

struct Node* inserir(struct Node* raiz, int valor){
    if (raiz == NULL){
        return novoNo(valor);
    }
    if (valor < raiz->valor){
        raiz->esquerda = inserir(raiz->esquerda, valor);
    }
    else if (valor >raiz->valor){
        raiz->direita = inserir(raiz ->direita, valor);
    }
    return raiz;
}

//Buscar um valor na árvore
struct Node* buscar(struct Node* raiz, int valor){
    if (raiz ==NULL || raiz->valor == valor){
        return raiz;
    }
    if (valor <raiz->valor){
        return buscar(raiz->esquerda, valor);
    }
    else{
        return buscar (raiz->direita, valor);
    }
}

//Exibir em ordem

void emOrdem(struct Node* raiz){
    if (raiz != NULL){
        emOrdem(raiz->esquerda);
        printf("%d", raiz->valor);
        emOrdem(raiz->direita);
    }
}

void liberarArvore(struct Node* raiz){
    if (raiz != NULL){
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}

int main(){

    struct Node* raiz =NULL;
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 40);
    inserir(raiz, 50);
    inserir(raiz, 10);
    inserir(raiz, 60);
    inserir(raiz, 20);

    printf("Elementos em ordem: ");
    emOrdem(raiz);
    printf("\n");

    // buscar um elemento
    int valor = 10;
    struct Node* resultado = buscar(raiz, valor);
    if (resultado != NULL){
        printf("valor %d encontrado na árvore. \n", valor);
    }
    else{
        printf("Valor %d não encontrado.\n", valor);
    }

    liberarArvore(raiz);
    return 0;
}