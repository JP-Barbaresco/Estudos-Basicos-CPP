/*
 *Data: 01/11/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Tabuada 1 a 10
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, mult;

	
	for (i = 1; i <= 10; i++){
		printf("\n-------------------");
		printf("\n|   Tabuada de %i  |", i);
		for (j = 1; j <= 10; j++){
			mult = i * j;
			printf("\n-------------------");
			printf("\n|  %i  |  %i |  %i  |", i, j, mult);
		}
		printf("\n------------------\n");
	} 
}
