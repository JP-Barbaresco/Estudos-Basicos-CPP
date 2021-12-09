/*
 *Data: 03/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calcular média de homens e mulheres
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	char sexo[1];
	int i, pessoas ,idade;
	float soma_idade=0, soma_homem=0, soma_idade_homem=0, soma_mulher=0, soma_idade_mulher=0, media_grupo=0, media_homem=0, media_mulher=0;
	
	printf("Quantas pessoas deseja analisar? ");
	scanf("%i", &pessoas);
	printf("\n================================================\n");
	
	for (i = 1; i <= pessoas; i++){
		printf("           Pessoa %i\n", i);
		printf("Idade: ");
		scanf("%i", &idade);
		printf("Sexo [M/F]: ");
		scanf("%s", sexo);
		
		soma_idade = soma_idade + idade;
		
		if (strcmp(sexo,"M")==0){
			soma_homem++;
			soma_idade_homem = soma_idade_homem + idade;
		} else if (strcmp(sexo,"F")==0){
			soma_mulher++;
			soma_idade_mulher = soma_idade_mulher + idade;
		}
		
		if (i < pessoas){
		printf("\n------------------------------------------------\n");
		}
	}
	
	media_grupo = soma_idade/pessoas;
	media_homem = soma_idade_homem/soma_homem;
	media_mulher = soma_idade_mulher/soma_mulher;
	
	printf("\n================================================\n");
	printf("           Resultado:");
	printf("\nMédia de idade do grupo: %.2f", media_grupo);
	printf("\nMédia de idade dos homens: %.2f", media_homem);
	printf("\nMédia de idade das mulheres: %.2f", media_mulher);		
	printf("\n================================================\n");
}
