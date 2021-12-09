/*
 *Data: 03/11/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Quantidade de Primos
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int i, j, k, numero, resto, cont_divi=0, soma_primos=0;
	
	for (i = 1; i <= 10; i++){
		printf("\nDigite o %i� n�mero inteiro: ", i);
		scanf("%i", &numero);
		
		for(j = 1; j <= numero; j++){
			resto = numero % j;
			if (resto == 0){
				cont_divi++;
			}
		}
		
		if (cont_divi == 2){
			soma_primos++;
		}
		
		cont_divi = 0;
	}
	
	printf("\nQuantidade de n�meros primos digitados: %i", soma_primos);
}
