#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	
	printf("Digite um número qualquer (1/2): ");
	scanf("%f", &num1);
	
	printf("Digite um número qualquer (2/2): ");
	scanf("%f", &num2);
	
	// Lógica para ordenar os números
	if (num1 > num2) {
		printf("\nOrdenados: %0.1f - %0.1f", num1, num2);
	} else {
		printf("\nOrdenados: %0.1f - %0.1f", num2, num1);
	}
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
}