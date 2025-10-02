#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int ano_aumento, ano_contratado = 2018, contador;
	float aumento = 0.015, salario_atual = 1000.00;
	
	printf("Digite o ano que você deseja saber o salário com o aumento: ");
	scanf("%d", &ano_aumento);
	
	printf("\nO Funcionário foi contratado no ano de %d, recebendo nesse ano R$%0.2f", ano_contratado, salario_atual);
	
	for (contador = 0; ano_contratado < ano_aumento; contador++) {
		salario_atual = salario_atual + (salario_atual * aumento);
		aumento = aumento + aumento;
		ano_contratado++;
	}
	
	printf("\n\n===============\nApós %d anos trabalhando conosco, seu salário é de: R$%0.2f", contador, salario_atual);
	printf("\nKaio Gomes do Nascimento Mazza, 01/10/2025");
}