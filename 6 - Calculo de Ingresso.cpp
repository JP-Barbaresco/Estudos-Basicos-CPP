/*
 *Data: 01/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calcular desconto
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main () {
	
	float preco, desp, lmax;
	int vend, i;
	
	printf("-------------------------------------------------------");
	printf("\n| Preço do Ingresso | Ingressos Vendidos | Lucro Max. |");
	
	desp = 200;
	vend = 120;
	preco = 5;
	
	for (preco = 5; preco >= 1; preco = preco - 0.5) {
		
		if (preco == 5) {
			vend = 120;
		} else if (preco < 5) {
			vend = vend + 26;
		}
		
		lmax = preco*vend - desp;
		
		printf("\n-------------------------------------------------------");
		printf("\n|        %.2f       |         %i        |   %.2f   |", preco, vend, lmax);
		
	}
	printf("\n-------------------------------------------------------");
}
