/*
 *Data: 03/11/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Soma 1/n
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int n, i;
	float j, S=0;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%i", &n);
	
	for (i = 1; i <= n; i++){
		j = i;
		S = S + (1/j);
	}
	
	for (i = 1; i <= n; i++){
		if (i < n){
			printf("1/%i + ", i);
		} else if (i = n) {
			printf("1/%i = ", n);
		}
	}
	printf("%.2f", S);
	
}
