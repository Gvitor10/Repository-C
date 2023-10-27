#include <stdio.h>
#include <stdlib.h>

// Aula 02 - Aprendendo sobre variáveis e como as declarar.

int main () {
	// Declarando as variáveis
	char meuNome[30] = "Gabriel"; // Char -> strings.
	int idade = 22; // int -> Numeros inteiros.
	float preco = 7.99; // float -> Numeros reais, com casas decimais.
	
	// Imprimindo as variaveis
	printf("%s \n", meuNome); // Imprime a variavel meuNome.
	printf("%d \n", idade); // Imprime a variavel idade.
	printf("%.2f", preco); // Imprime a variavel preco.
	
	return 0;
}
