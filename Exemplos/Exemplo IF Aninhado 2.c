#include <stdio.h>
main () {
	char ch;
	printf("Digite uma letra entre A e Z: ");
	ch = getchar();
	
	if (ch >= 'A' && ch <= 'Z')
		printf("\nVocê acertou!");
}