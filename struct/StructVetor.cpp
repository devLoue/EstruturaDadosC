#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3 //Definindo constante = 3 pq a minha struct tipo_pessoa por enquanto vai ter apenas 3 "atributos" ou "campos"que são: nome, idade e peso. Ou seja TAM = 3.

struct tipo_pessoa{
	char nome[50];
	int idade;
	float peso;	
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	
	tipo_pessoa lista[TAM];
	int i;
	for (i=0; i<TAM;i++){
		printf("Insira os dados (%d): \n", i+1);
		printf("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
	}
	system("cls");
	
	system("pause");
	return 0;
}