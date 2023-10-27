#include <stdio.h>

/* Exercicio 03 - Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor total do rendimento e o
valor total (valor do depósito + valor de rendimento) */

int main() {
	
	float valor_depositado, taxa_juros, rendimento, rendimento_total;
	
	// Recebendo os valores.
	printf("Digite o valor do deposito: \n");
	scanf("%f", &valor_depositado);
	printf("Digite o valor da taxa de juros: \n");
	scanf("%f", &taxa_juros);
	
	// Calculando o valor do rendimento.
	rendimento = valor_depositado * (taxa_juros / 100);
	
	// Calculando o valor do rendimento total.
	rendimento_total = valor_depositado + rendimento;
	
	// Mostrando os resultados.
	printf("Rendimento: %.2f \n", rendimento);
	printf("Valor total do rendimento: %.2f \n", rendimento_total);
	
	return 0;
}
