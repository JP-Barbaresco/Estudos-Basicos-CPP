/*
 *Data: 01/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calcular desconto
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome [50];
	int i, tot, bon;
	
	for (i = 1; i <= 15; i++) {
		printf("------------------------------");
		printf("\nNome: ");
		scanf("%s", nome);
		printf("Compras no último ano: ");
		scanf("%i", &tot);
		
		
		if (tot == 0) {
			bon = 0;
		} else if (tot <= 1000 && tot != 0) {
			bon = 10;
		} else if (tot > 1000){
			bon = 15;
		}
		
		printf("Bônus: %i%%\n", bon);
		printf("------------------------------\n");
	}
}
