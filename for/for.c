#include <stdio.h>

int main (void){

    int i;
    float soma, media, nota[3];
    for (i=0;i<3;i++){
        printf("Digite a nota %d\n", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma/3;
    printf("A media das notas e: %.1f \n", media);
    return 0;
}