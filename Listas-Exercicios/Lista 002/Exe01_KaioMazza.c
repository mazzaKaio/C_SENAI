#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, maior_numero;
	// Seção para o primeiro numero digitado
	printf("Digite o 1º número: ");
	scanf("%f", &num1);
	
	// Seção para o segundo numero digitado
	printf("Digite o 2º número: ");
	scanf("%f", &num2);
	
	// Seção para o tereiro numero digitado
	printf("Digite o 3º número: ");
	scanf("%f", &num3);
	
	// Lógica para determinar qual é o maior
	if (num1 >= num2 && num1 >= num3) {
		maior_numero = num1;
	} else if (num2 >= num1 && num2 >= num3) {
		maior_numero = num2;
	} else {
		maior_numero = num3;
	}
	
	// Exibe o numero maior
	printf("O número maior é o: %0.1f", maior_numero);
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
}
