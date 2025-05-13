#include <stdlib.h>
#include <stdio.h>

void bubbleSort (int vetor[], int tamanho){
    for (int i=0; i<tamanho - 1; i ++){
        for (int j = 0; j<tamanho - i - 1; j++){
            if (vetor[j]> vetor[j+1]){

                int temp =vetor[j];
                vetor[j] = vetor[j+1];
                vetor [j+1] = temp;
            }
        }
    }
}

void imprimirvetor (int vetor[], int tamanho){
    for (int i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){
    int numeros[]={17,12,1,24,-8,-6,5,3,28};
    int tamanho = sizeof(numeros)/ sizeof(numeros[0]);

    printf("Vetor original: ");
    imprimirvetor(numeros, tamanho);

    bubbleSort(numeros, tamanho);

    printf("Vetor ordenado: ");
    imprimirvetor(numeros, tamanho);
    return 0;
}