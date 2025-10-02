#include <stdio.h>

main () {
	if (getchar() == 'p') {
		printf("Você digitou P");
		printf(" Pressione outra tecla");
		getchar();
	}
}