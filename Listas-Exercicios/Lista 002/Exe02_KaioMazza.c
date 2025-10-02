#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Digite sua idade a seguir: ");
	scanf("%d", &idade);

	// Lógica para classificar
	if (idade <= 11) {
		printf("Você é classificado como: criança!");
	} else if (idade >= 12 && idade <= 18) {
		printf("Você é classificado como: adolescente!");
	} else if (idade >= 19 && idade <= 24) {
		printf("Você é classificado como: jovem!");
	} else if (idade >= 25 && idade <= 59) {
		printf("Você é classificado como: adulto!");
	} else {
		printf("Você é classificado como: idoso!");
	}
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
}