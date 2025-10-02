#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float numero;
	printf("Digite um número qualquer: ");
	scanf("%f", &numero);
	
	if (numero < 0)
		printf("Número menor que zero");
	else if (numero < 10)
		printf("Número maior ou igual a zero e menor que 10");
	else if (numero < 100)
		printf("Número maior ou igual a 10 e menor que 100");
	else
		printf("Número maior ou igual a 100");
}