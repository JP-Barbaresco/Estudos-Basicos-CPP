/*
 *Data: 01/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Tabuada número escolhido
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int num, mult, i;
	
	printf("Digite um número: ");
	scanf("%i", &num);

	printf("\n---------------");
	printf("\n| Tabuada de %i |", num);
			
	for (i = 1; i <= 10; i++){
		
		mult = num*i;
		
		printf("\n---------------");
		printf("\n|  %i   |   %i  |", i, mult);
	}
	
	printf("\n---------------");

}
