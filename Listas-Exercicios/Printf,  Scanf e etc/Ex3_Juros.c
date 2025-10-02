#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float valor, juros, rendimento, valor_total;
	// Pede ao usuário um valor de deposito
	printf("Digite o valor do depósito: ");
	// Lê a resposta do usuário
	scanf("%f%*c", &valor);
	// Pede ao usuário uma taxa de juros
	printf("Digite uma taxa de juros (%): ");
	// Lê a resposta do usuário
	scanf("%f%*c", &juros);
	// Calcula o valor do rendimento
	rendimento = valor * juros/100;
	// Calcula o valor total do rendimento
	valor_total = valor + rendimento;
	// Mostra ao usuário o valor total
	printf("O valor total do rendimento é: %0.2f", valor_total);
	
	return 0;
}