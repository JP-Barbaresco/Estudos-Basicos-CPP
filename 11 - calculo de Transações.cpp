/*
 *Data: 02/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Calculo de Transação
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char tipo[1];
	float trans, totV, totP, totE, priP;
	int i, quantTrans;
	
	totV = 0;
	totP = 0;
	totE = 0;
	priP = 0;
	
	printf("Quantas transferências serão recebidas? ");
	scanf("%i", &quantTrans);
	printf("\n==========================================\n");
	
	for(i = 1; i <= quantTrans; i++){
		printf("     %iª Transferência:\n", i);
		printf("Tipo de transferência [V/P]: ");
		scanf("%s", tipo);
		printf("Valor da transferência: ");
		scanf("%f", &trans);
		
		if(strcmp(tipo,"V")==0) {
			totV = totV + trans;		
		} else if(strcmp(tipo,"P")==0) {
			totP = totP + trans;
			priP = trans/3;
			
			printf("\nO valor da primeira parcela é: %.2f\n", priP);
		}
		
		totE = totE + trans;
		printf("----------------------------------------------\n");

	}
	
	printf("\n==========================================");
	printf("\nValor Total das Compras à Vista: %.2f", totV);
	printf("\nValor Total das Compras a Prazo: %.2f", totP);
	printf("\nValor Total das Compras Efetuadas: %.2f", totE);
	printf("\n==========================================");

}
