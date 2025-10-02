#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, num4, soma_total;
	
	printf("Digite o 1º número para a soma: ");
	scanf("%f%*c", &num1);
	
	printf("Digite o 2º número para a soma: ");
	scanf("%f%*c", &num2);
	
	printf("Digite o 3º número para a soma: ");
	scanf("%f%*c", &num3);
	
	printf("Digite o 4º número para a soma: ");
	scanf("%f%*c", &num4);
	
	soma_total = num1 + num2 + num3 + num4;
	
	printf("Soma total dos 4 números: %0.1f", soma_total);
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
	
	return 0;
}