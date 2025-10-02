#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	int a,b;
	printf("Digite 2 números (em sequencia): ");
	scanf("%d %d%*c", &a, &b);
	
	if (b) {
		printf("%0.2f", a/b);
	} else {
		printf("Não posso dividir por zero =(\n");
	}
}