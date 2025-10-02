#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	// INICIALIZANDO VÁRIAVEIS
	int opcao;
	float salario, imposto, aumento;
	
	// MENU DE OPÇÃO
	printf("======= MENU =======");
	printf("\n[1] Imposto sobre o salário");
	printf("\n[2] Novo salário (aumento)");
	printf("\n[3] Classificação salarial");
	printf("\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	
	// AÇÕES DO MENU
	switch (opcao) {
		case 1:
			printf("\n\n=== IMPOSTO SALARIAL ===");
			printf("\nDigite o salário do funcionário: ");
			scanf("%f%*c", &salario);
			
			if (salario < 500) 
				imposto = 5;
			else if (salario <= 850) 
				imposto = 10;
			else 
				imposto = 15;
			
			printf("\nImposto aplicado: %0.0f(por cento)", imposto);
			printf("\nValor do imposto a ser pago: R$%0.2f", (salario * imposto/100));
			
			break;
		
		case 2:
			printf("\n\n=== AUMENTO SALARIAL ===");
			printf("\nDigite o salário do funcionário: ");
			scanf("%f%*c", &salario);
			
			if (salario < 450)
				aumento = 100;
			else if (salario < 750) 
				aumento = 75;
			else if (salario <= 1500) 
				aumento = 50;
			else 
				aumento = 25;
			
			printf("\nValor a ser atribuído: R$%0.2f", aumento);
			printf("\nNovo salário (pós aumento): R$%0.2f", (salario + aumento));
			
			break;
		
		case 3:
			printf("\n\n=== CLASSIFICAÇÃO SALARIAL ===");
			printf("\nDigite o salário do funcionário: ");
			scanf("%f%*c", &salario);
			
			if (salario <= 700)
				printf("\nClassificação salarial: MAL REMUNERADO!");
			else
				printf("\nClassificação salarial: BEM REMUNERADO!");
			
			break;
		
		default:
			printf("OPÇÃO INVÁLIDA!");
			break;
	}
	
	printf("\n\nKAIO GOMES DO NASCIMENTO MAZZA, 25/09/2025");
}