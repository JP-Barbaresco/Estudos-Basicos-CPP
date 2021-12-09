/*
 *Data: 01/11/2021
 *Dev: Jo�o Pedro C. S. Barbaresco
 *Fun��o: Contabilizador Faixa Et�ria
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float i, idade, soma1=0, soma2=0, soma3=0, soma4=0, soma5=0;
	float  porcent1, porcent2, porcent3, porcent4, porcent5;
	
	for (i = 1; i <=15; i++){
		printf("Escreva a idade da %.0f� pessoa: ", i);
		scanf("%f", &idade);
		
		if (idade <= 15) {
			soma1 = soma1 + 1;
		} else if (idade >= 16 && idade <= 30){
			soma2 = soma2 + 1;
		} else if (idade >= 31 && idade <= 45){
			soma3 = soma3 + 1;
		} else if (idade >= 46 && idade <= 60){
			soma4 = soma4 + 1;
		} else if (idade >= 61){
			soma5 = soma5 + 1;
		}
	}
	
	porcent1 = (soma1/15)*100;
	porcent2 = (soma2/15)*100;
	porcent3 = (soma3/15)*100;
	porcent4 = (soma4/15)*100;
	porcent5 = (soma5/15)*100;
	
	printf("------------------------------------\n");
	printf("\n------------------------------------");
	printf("\nDescri��o de Faixa Et�ria:");
	printf("\n1� Faixa Et�ria: at� 15 anos");	
	printf("\n2� Faixa Et�ria: de 16 a 30 anos");
	printf("\n3� Faixa Et�ria: de 31 a 45 anos");
	printf("\n4� Faixa Et�ria: de 46 a 60 anos");
	printf("\n5� Faixa Et�ria: acima de 61 anos");
	printf("\n------------------------------------");
	printf("\n------------------------------------");
	printf("\nTotal de Pessoas por Faixa Et�ria:");
	printf("\n1� Faixa Et�ria: %.0f", soma1);	
	printf("\n2� Faixa Et�ria: %.0f", soma2);
	printf("\n3� Faixa Et�ria: %.0f", soma3);
	printf("\n4� Faixa Et�ria: %.0f", soma4);
	printf("\n5� Faixa Et�ria: %.0f", soma5);
	printf("\n------------------------------------");
	
	printf("\n\n------------------------------------");
	printf("\nPorcentagens: ");
	printf("\n1� Faixa Et�ria: %.2f%%", porcent1);	
	printf("\n2� Faixa Et�ria: %.2f%%", porcent2);
	printf("\n3� Faixa Et�ria: %.2f%%", porcent3);
	printf("\n4� Faixa Et�ria: %.2f%%", porcent4);
	printf("\n5� Faixa Et�ria: %.2f%%", porcent5);
}
	
