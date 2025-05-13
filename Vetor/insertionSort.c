#include <stdlib.h>
#include <stdio.h>

void insertionSort (int vetor[], int tamanho){
    for (int i=0; i<tamanho - 1; i ++){
        int chave = vetor[i];
        int j = i-1;

        while(j>= 0 && vetor[j]> chave){
            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1] =chave;
    }
}

void imprimirVetor (int vetor[], int tamanho){
    for (int i =0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){

    int numeros[] = {17,12,1,24,-8,-6,5,3,28};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Vetor original: ");
    imprimirVetor (numeros, tamanho);

    insertionSort(numeros, tamanho);

    printf("Vetor ordenado: ");
    imprimirVetor(numeros, tamanho);
}