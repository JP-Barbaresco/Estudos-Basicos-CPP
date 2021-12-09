/*
 *Data: 01/11/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Tabuada n�mero escolhido
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int num, mult, i;
	
	printf("Digite um n�mero: ");
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
