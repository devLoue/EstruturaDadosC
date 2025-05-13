#include <stdlib.h>
#include <stdio.h>

void selectionSort (int vetor[], int tamanho){
    for (int i=0; i<tamanho - 1; i ++){
        int indicemenor = i;

        for (int j = i + 1; j< tamanho; j++){
            if (vetor[j] <vetor[indicemenor]){
                indicemenor = j;
            }
        }

        if (indicemenor != i){
            int temp =vetor[i];
            vetor[i] = vetor[indicemenor];
            vetor[indicemenor] = temp;
        }
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

    selectionSort(numeros, tamanho);

    printf("Vetor ordenado: ");
    imprimirVetor(numeros, tamanho);
    return 0;
}