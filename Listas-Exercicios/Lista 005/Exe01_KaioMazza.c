#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int ano_contratado = 2020, ano_desejado, cont = 0;
	float salario = 1000, aumento = 0.015;
	
	printf("Digite o ano que você deseja saber o salário do funcionário com o(s) aumento(s): ");
	scanf("%d%*c", &ano_desejado);
	
	printf("\nO funcionário foi contratado em %d, recebendo R$%0.2f!", ano_contratado, salario);
	
	while (ano_contratado < ano_desejado) {
		salario += salario * aumento;
		aumento += aumento;
		cont++;
		ano_contratado++;	
	}
	
	printf("\nApós %d anos trabalhados, o salário do funcionário é de: R$%0.2f", cont, salario);
	
	printf("\n\nKaio Gomes do Nascimento Mazza - Lista 005 (while)");
}