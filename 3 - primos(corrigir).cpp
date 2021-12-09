/*
 *Data: 29/10/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Primos entre 92 e 1478
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int i, prod, divi, pri;
	
	prod = 1;
	
	for (i = 92; i <= 1478; i++) {
		for (divi = 1; divi <= i; divi++) {
			if (i % divi == 0) {
				pri++;
			}
		}
		if (pri == 2) {
			prod = prod * i;
		}
		pri = 0;
	}
	prod = prod * (-1);
	printf("\n%i", prod);
}
