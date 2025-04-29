#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAMLISTA 3

struct Pessoas{
	int idade;
	float peso;
	char nome[50];
};

typedef Pessoas Pessoas;

int main(){
	
	Pessoas lista[TAMLISTA];
	
	int i;
	
	for (i=0; i<TAMLISTA; i++){
		printf("Insira os dados (%d): \n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	system("cls");
	
	printf("Seus dados: \n");
	for (i=0; i<TAMLISTA; i++){
		printf("Nome: %s\n", lista[i].nome);
		printf("Idade: %d\n",lista[i].idade);
		printf("Peso: %f\n", lista[i].peso);
	}
	return 0;	
}