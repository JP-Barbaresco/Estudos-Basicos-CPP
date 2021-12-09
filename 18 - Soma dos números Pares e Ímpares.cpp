/*
 *Data: 03/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Soma Números pares e ímpares
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int i, numero, soma_par=0, soma_impar=0;
	
	for(i = 1; i <= 10; i++){
		printf("Escreva o %iº número: ", i);
		scanf("%i", &numero);
		
		if(numero % 2 == 0){
			soma_par = soma_par + numero;
		} else if (numero % 2 != 0) {
			soma_impar = soma_impar + numero;
		}
		
		if (i < 10){
		printf("\n------------------------------------------------\n");
		}
	}
	printf("\n================================================\n");
	printf("           Resultado:");
	printf("\nA soma de todos os números pares lidos é: %i", soma_par);
	printf("\nA soma de todos os números ímpares lidos é: %i", soma_impar);
	printf("\n================================================\n");

}
