#include <stdio.h>

// Exercicio 2 - Elabore um programa que receba 4 notas e calcule a média aritmetica entre elas:

int main() {
	
	float nota_1, nota_2, nota_3, nota_4, media;
	
	// Recebendo as notas.
	printf("Digite a nota 1: \n");
	scanf("%f", &nota_1);
	printf("Digite a nota 2: \n");
	scanf("%f", &nota_2);
	printf("Digite a nota 3: \n");
	scanf("%f", &nota_3);
	printf("Digite a nota 4: \n");
	scanf("%f", &nota_4);
	
	// Calculando a média.
	media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
	
	// mostrando o resultado.
	printf("A media das notas e: %.2f", media);
	
	return 0;
} 
