#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float sal, novosal;
	// Mostra a mensagem antes da leitura do salário
	printf("\nDigite o salário do funcionário: ");
	// Recebe o salário
	scanf("%f%*c",&sal);
	// Calcula o novo salário
	novosal = sal + sal * 25/100;
	// Mostra o novo salário
	printf("\nNovo salário = %0.2f", novosal);
	// Para o programa a espera de um enter
	getchar();
	return 0;
}