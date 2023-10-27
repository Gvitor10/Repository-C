#include <stdio.h>

// Exercicio 1 - Escreva um programa que leia um numero inteiro inteiro e apresente o seu antecessor e o seu sucessor:

int main () {
	int num, antecessor, sucessor;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor  = num + 1;
	
	printf("O numero escolhido foi: %d \n", num);
	printf("O seu antecessor e: %d \n", antecessor);
	printf("O seu sucessor e: %d", sucessor);
}
