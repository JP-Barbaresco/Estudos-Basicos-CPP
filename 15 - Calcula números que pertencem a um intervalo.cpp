/*
 *Data: 03/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calcula números pertencentes a um intervalo
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int i, numero, soma_numero=0;
	
	for (i = 1; i <= 10; i++){
		printf("Digite o %iº número: ", i);
		scanf("%i", &numero);
		
		if(numero > 30 && numero < 90){
			soma_numero++;
		}
	}
	
	printf("\n%i números digitados estão entre 30 e 90.", soma_numero);
}
