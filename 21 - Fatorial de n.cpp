/*
 *Data: 07/112021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Calculo Fatorial
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int n, i, f;
	
	printf("Escreva um n�mero inteiro positivo: ");
	scanf("%i", &n);
	
	switch (n){
		case 0:
			f = 1;
			break;
		default:
			for (i = 1; i <= n; i++) {
				f = f * i;
			}
			break;
	}
	printf("\n%i! = ", n);
	for (i = 1; i <= n; i++){
		if (i < n){
			printf("%i x ", i);
		} else if (i = n) {
			printf("%i = ", n);
		}
	}
	printf("%i", f);
}
