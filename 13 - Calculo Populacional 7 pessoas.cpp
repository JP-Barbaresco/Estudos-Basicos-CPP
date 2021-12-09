/*
 *Data: 02/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calculo Populacional 7 pessoas
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int i, idade, pessoas, pessoas_peso=0;
	float peso, media_idade, soma_idade=0;
	
	printf("Quantas pessoas deseja analisar? ");
	scanf("%i", &pessoas);
	printf("\n================================================\n");
	
	for (i = 1; i <= pessoas; i++){
			printf("           Pessoa %i\n", i);
		printf("Idade: ");
		scanf("%i", &idade);
		printf("Peso: ");
		scanf("%f", &peso);
		
		if (peso > 90) {
			pessoas_peso++;
		}
		
		soma_idade = soma_idade + idade;
		
		if (i < pessoas){
		printf("\n------------------------------------------------\n");
		}
		
	}
	
	media_idade = (soma_idade/pessoas);

	printf("\n================================================\n");
	printf("           Resultado:");
	printf("\nQuantidade de pessoas com mais de 90 quilos: %i", pessoas_peso);
	printf("\nMédia de idade das %i pessoas: %.2f", pessoas, media_idade);
	printf("\n================================================\n");
}
