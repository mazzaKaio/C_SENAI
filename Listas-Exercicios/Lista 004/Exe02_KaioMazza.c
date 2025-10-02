#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cod_cidade_maior, cod_cidade_menor, cod_cidade, maior_indice = 0, menor_indice = 0, total_veiculos, total_acidentes, num_veiculos, num_acidentes, cont_acidentes = 0, contador; 
	float media_veiculos, media_acidentes;
	
	for(contador = 1; contador <= 5; contador++) {
		printf("\n--------------------\nDigite o código da cidade: ");
		scanf("%d%*c", &cod_cidade);
		
		printf("\nDigite o número de veículos funcionais da cidade: ");
		scanf("%d%*c", &num_veiculos);
		
		printf("\nDigite o número de acidentes com vítimas que ocorreram na cidade: ");
		scanf("%d%*c", &num_acidentes);
		
		// Adiciona ao total de veículos
		total_veiculos = total_veiculos + num_veiculos;
		
		// Processa o números de acidentes se o número de veiculos menor que 2000
		if (num_veiculos < 2000) {
			total_acidentes = total_acidentes + num_acidentes;
			cont_acidentes++;
		}
		
		// Maior/menor indice
		if (num_acidentes > maior_indice) {
			maior_indice = num_acidentes;
			cod_cidade_maior = cod_cidade;
		} else if (num_acidentes < menor_indice) {
			menor_indice = num_acidentes;
			cod_cidade_menor = cod_cidade;
		} else if (menor_indice > maior_indice) {
			maior_indice = menor_indice;
			cod_cidade_maior = cod_cidade;
		} else {
			menor_indice = maior_indice;
			cod_cidade_menor = cod_cidade;
		}
	}
	
	// Processamentos restantes
	media_veiculos = total_veiculos / 5;
	media_acidentes = total_acidentes / cont_acidentes;
	
	printf("\nA cidade de código %d tem %d acidentes, considerada a cidade com mais acidentes!", cod_cidade_maior, maior_indice);
	printf("\nA cidade de código %d tem %d acidentes, considerada a cidade com menos acidentes!", cod_cidade_menor, menor_indice);
	printf("\nA média de todos os veiculos é: %0.2f", media_veiculos);
	printf("\nA média de acidentes nas cidades que tem menos de 2000 veiculos ativos é: %0.2f", media_acidentes);
	
	printf("\nKaio Gomes do Nascimento Mazza, 01/10/2025");
}