/*
 *Data: 29/10/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Calcular a soma de 1 + 1/2 ... 1/n.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int i, A, B, C, D, E, F, G, H;
	
	for (i = 1; i <= 5; i++){
		printf("\nEscreva a primeira vari�vel: ");
		scanf("%i", &A);
		E = A;
		printf("\nEscreva a segunda vari�vel: ");
		scanf("%i", &B);
		if (B > A) {
			E = B;
			F = A;
		} else if (A > B){
			F = B;
		}
		printf("\nEscreva a terceira vari�vel: ");
		scanf("%i", &C);
		printf("\nEscreva a quarta vari�vel: ");
		scanf("%i", &D);
		printf("\nOrdem de leitura:\n%i\n%i\n%i\n%i\n", A, B, C, D);
	} 
	
	
	printf("Ordem de crescente:\n%i\n%i\n%i\n%i", E, F, G, H);
	printf("Ordem de decrescente:\n%i\n%i\n%i\n%i", H, G, F, E);
}
