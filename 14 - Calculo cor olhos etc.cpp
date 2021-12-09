/*
 *Data: 02/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calculo Populacional 7 pessoas
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char cor_olho[1], cor_cabelo[1];
	int i, pessoas, idade, soma_pessoas=0, soma_ruivo=0, soma_idade_pessoas=0, s;
	float peso, altura, soma_idade=0, soma_olho=0, media_idade, porcent_olho;
	
	printf("Quantas pessoas deseja analisar? ");
	scanf("%i", &pessoas);
	printf("\n================================================\n");
	
	for(i = 1; i <= pessoas; i++){
		printf("           Pessoa %i\n", i);
		printf("Idade: ");
		scanf("%i", &idade);
		printf("Peso: ");
		scanf("%f", &peso);
		printf("Altura: ");
		scanf("%f", &altura);
		printf("Cor dos Olhos [A, P, V, C]: ");
		scanf("%s", cor_olho);
		printf("Cor Cabelos [P, C, L, R]: ");
		scanf("%s", cor_cabelo);
		
		if (idade > 50 && peso < 60){
			soma_pessoas++;
		}
		if (altura < 1.50){
			soma_idade = soma_idade + idade;
			soma_idade_pessoas++;
		}
		
		if (strcmp(cor_olho,"A")==0){
			soma_olho++;
		}
		
		if (strcmp(cor_cabelo,"R")==0 && (strcmp(cor_olho,"A")!=0)) {
			soma_ruivo++;
		}

		
		if (i < pessoas){
		printf("\n------------------------------------------------\n");
		}
	}

	media_idade = (soma_idade/soma_idade_pessoas);
	porcent_olho = (soma_olho/pessoas)*100;
	printf("\n================================================\n");
	printf("           Resultado:");
	printf("\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %i", soma_pessoas);
	printf("\nMédia de idade de pessoas com altura inferior a 1,50m: %.2f", media_idade);
	printf("\nPorcentagem de pessoas com olhos azuis entre todas analizadas: %.2f", porcent_olho);
	printf("\nQuantidade de pessoas ruivas e que não possuem olhos azuis: %i", soma_ruivo);
	printf("\n================================================\n");
	
}
