#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	int y = 10;
	
	do {
		printf("\nValor de Y = %d", y);
		y = y - 2;
	} while (y != 0);
	printf("\n\n  Valor de Y depois que sair da estrutura = %d", y);
}