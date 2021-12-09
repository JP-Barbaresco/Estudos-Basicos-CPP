/*
 *Data: 20/10/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Somar de 1 a N
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int n, x, y;
	
	y = 0;
	
	printf("Até que valor deseja somar? ");
	scanf("%i", &n);	
	
	for (x=1; x <n+1; x++) {
		y = y + x;
	}
	
	printf("\nSoma de 1 a %i: %i", n, y);
}
