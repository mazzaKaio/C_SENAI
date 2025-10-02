#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Digite a 1ª nota: ");
	scanf("%f%*c", &nota1);
	
	printf("Digite a 2ª nota: ");
	scanf("%f%*c", &nota2);
	
	printf("Digite a 3ª nota: ");
	scanf("%f%*c", &nota3);
	
	media = (nota1+nota2+nota3) / 3;
	
	printf("A média aritmética é: %0.1f", media);
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
	
	return 0;
}