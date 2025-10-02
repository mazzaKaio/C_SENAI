#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	char op;
	float num1, num2;
	
	printf("Digite um número e aperte ENTER: ");
	scanf("%f%*c", &num1);
	
	printf("Digite um operador matemático (+, -, *, /) e aperte ENTER: ");
	scanf("%c%*c", &op);
	
	printf("Digite um número e aperte ENTER: ");
	scanf("%f%*c", &num2);
	
	switch (op) {
		case '+':
			printf(" = %.2f", num1 + num2);
			break;
		case '-':
			printf(" = %.2f", num1 - num2);
			break;
		case '*':
			printf(" = %.2f", num1 * num2);
			break;
		case '/':
			if (num2 == 0)
				printf("Não é possível dividir um número por 0!");
			else
				printf(" = %.2f", num1 / num2);
				break;
		default:
			printf("Operador escolhido inválido!");
	}
	printf("\n\nKAIO GOMES DO NASCIMENTO MAZZA, 25/09/2025");
	
	return 0;
}