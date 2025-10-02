#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Portuguese");
	int pe = 12, jarda = 3, milha = 1760;
	float pes_c, polegadas_c, jardas_c, milhas_c;
	// Pede ao usuário uma medida EM PÉS
	printf("Digite uma medida em PÉS (ft): ");
	scanf("%f%*c", &pes_c);
	
	// Realiza as conversões
	polegadas_c = pes_c * pe;
	jardas_c = pes_c / jarda;
	milhas_c = jardas_c / milha;
	
	// Mostra os resultados
	printf("Medida em polegadas: %f", polegadas_c);
	printf("\nMedida em jardas: %f", jardas_c);
	printf("\nMedida em milhas: %f", milhas_c);
	
	return 0;
}