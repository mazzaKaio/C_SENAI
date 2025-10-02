#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	int a;
	for (a=15; a>=1; a=a-2) {
		printf("\nDigite um número: ");
		// scanf("%d%*c", &a);
		printf(" %d ", a);
	}
}