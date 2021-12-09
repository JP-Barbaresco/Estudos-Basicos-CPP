/*
 *Data: 03/11/2021
 *Dev: João Pedro C. S. Barbaresco
 *Função: Tabela valores do Carro
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	float valor_carro, preco_final, preco_a_vista, quant_parcela, valor_parcela, percent_acrescimo;
	
	printf("Valor do Carro: ");
	scanf("%f", &valor_carro);
	printf("\n==================================\n");
	
	preco_a_vista = 0.8*valor_carro;
	printf("|À Vista               | %.2f|", preco_a_vista);
	printf("\n==================================\n");
	printf("\nParcelado:");
	printf("\n----------------------------------\n");
	for (quant_parcela = 6; quant_parcela <= 60; quant_parcela = quant_parcela+6){		
		percent_acrescimo = quant_parcela/200;
		preco_final = valor_carro*(1+percent_acrescimo);
		valor_parcela = preco_final/quant_parcela;
		
		printf("|Quantidade de Parcelas|    %.f   |", quant_parcela);
		printf("\n----------------------------------\n");
		printf("|Valor por Parcela     | %.2f |", valor_parcela);
		printf("\n----------------------------------\n");
		printf("|Preço Final           | %.2f|", preco_final);
		printf("\n----------------------------------\n\n");
		printf("\n----------------------------------\n");
	}
}
