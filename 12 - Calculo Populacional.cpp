/*
 *Data: 02/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calculo Populacional
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int i, quant, idade, quant_idade=0;
	float altura, peso, quant_altura=0, quant_peso=0, media_altura=0, cont_altura=0, porcent_peso=0;
	
	printf("Quantas pessoas deseja analisar? ");
	scanf("%i", &quant);
	printf("\n==========================================\n");
	
	for (i = 1; i <= quant; i++) {
		
		printf("           Pessoa %i\n", i);
		printf("Idade: ");
		scanf("%i", &idade);
		printf("Altura: ");
		scanf("%f", &altura);
		printf("Peso: ");
		scanf("%f", &peso);
		
		if (idade > 50) {
			quant_idade++;
		} else if (idade > 10 && idade < 20){
			cont_altura = cont_altura + altura;
			quant_altura++;
		}
		
		if (peso < 40) {
			quant_peso = quant_peso + 1;
		}

		printf("\n------------------------------------------------\n");
	}

	media_altura = cont_altura/quant_altura;
	porcent_peso = (quant_peso/quant) * 100;
	
	printf("\n==============================================\n");
	printf("\nQuantidade de pessoas com idade superior a 50 anos: %i", quant_idade);
	printf("\nMédia de altura das pessoas com idade entre 10 e 20: %.2f", media_altura);
	printf("\nPorcentagem de pessoas com peso inferior a 40 quilos entre as pessoas analisadas: %.2f%%", porcent_peso);
}
	
