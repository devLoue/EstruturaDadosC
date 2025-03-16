#include <stdio.h>

int main(){
    int idade;
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    if (idade >= 50){
        printf("Voce e velho!");
    }
    else if (idade==18){
        printf("Você ja pode ser preso!");
    }else{
        printf("Voce e novo");
    }
    return 0;
}