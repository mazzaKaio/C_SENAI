#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	// Declarando variaveis utilizadas
	float salario, imposto, gratificacao, novo_salario;
	printf("Digite o salário do funcionário: ");
	// Entrada do usuário do tipo float (f)
	scanf("%f%*c", &salario);
	// Variavel receberá 5% do salário
	gratificacao = salario * 5/100;
	// Variavel receberá 7% do salário
	imposto = salario * 7/100;
	// Mostra ao usuário o valor do imposto e da gratificacao
	printf("\nImposto: %0.2f ", imposto);
	printf("| Gratificação: %0.2f", gratificacao);
	// O salario mais a gratificacao e menos o imposto
	novo_salario = salario + gratificacao - imposto;
	// Mostra ao usuário o salário após alterações
	printf("\nSalário a receber: %0.2f", novo_salario);
	
	return 0;
}