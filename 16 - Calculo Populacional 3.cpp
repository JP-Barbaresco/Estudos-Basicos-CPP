/*
 *Data: 03/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calculo Populacional 3
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int i, pessoas, idade, soma_pessoa=0;
	float peso, altura, media_idade, soma_idade=0, porcent_pessoa, soma_pessoa_altura=0, soma_altura=0;
	
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
		
		soma_idade = soma_idade + idade;
		
		if (peso > 90 && altura < 1.50){
			soma_pessoa++;
		}
		
		if (idade > 10 && idade < 30 && altura > 1.90){
			soma_pessoa_altura++;
		}
		
		if (altura > 1.90){
			soma_altura++;
		}
		
		if (i < pessoas){
		printf("\n------------------------------------------------\n");
		}
	}
	
	media_idade = (soma_idade/pessoas);
	if (soma_altura == 0){
		porcent_pessoa = 0;
	} else if (soma_altura > 0) {
		porcent_pessoa = (soma_pessoa_altura/soma_altura) * 100.0;		
	}

	printf("\n================================================\n");
	printf("           Resultado:");
	printf("\nMédia de idade das %i pessoas: %.2f", pessoas, media_idade);
	printf("\nQuantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50 metros: %i", soma_pessoa);
	printf("\nPorcentagem de pessoas com mais de 10 e menos de 30 anos, entre quem possui altura maior que 1,90: %.2f%%", porcent_pessoa);
	//Retorna "1.#H"
	printf("\n================================================\n");

}
