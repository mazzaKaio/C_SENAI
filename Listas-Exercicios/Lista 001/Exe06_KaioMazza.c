#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	float nota1, peso1, nota2, peso2, nota3, peso3, media;
	
	printf("Digite a 1ª nota: ");
	scanf("%f%*c", &nota1);
	printf("Digite qual o peso dessa nota: ");
	scanf("%f%*c", &peso1);
	
	printf("Digite a 2ª nota: ");
	scanf("%f%*c", &nota2);
	printf("Digite qual o peso dessa nota: ");
	scanf("%f%*c", &peso2);
	
	printf("Digite a 3ª nota: ");
	scanf("%f%*c", &nota3);
	printf("Digite qual o peso dessa nota: ");
	scanf("%f%*c", &peso3);
	
	media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3);
	
	printf("A média ponderada é: %0.2f", media);
	
	printf("\n\n===============\nKAIO GOMES DO NASCIMENTO MAZZA, EU MESMO!");
	
	return 0;
}