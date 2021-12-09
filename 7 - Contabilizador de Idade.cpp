/*
 *Data: 01/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Contabilizador de Idade
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, soma;
	
	soma = 0;
	
	for (i = 1; i <= 10; i++) {
		printf("Escreva a %iª idade: ", i);
		scanf("%i", &idade);
		
		if (idade >= 18) {
			soma = soma + 1;
		}
	}
	
	printf("\n	O total de pessoas com 18 anos ou mais é: %i", soma);
}
