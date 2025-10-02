#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	int dia_nasc, mes_nasc;
	
	printf("Digite o DIA em que você nasceu e aperte ENTER: ");
	scanf("%d", &dia_nasc);
	
	// TRATAMENTO DE ERRO
	if (dia_nasc < 0 || dia_nasc > 31){
		printf("O dia que você inseriu é inválido! Digite um número entre 1 e 31.");
		return;
	}
	
	printf("Digite o NÚMERO DO MÊS em que você nasceu e aperte ENTER: ");
	scanf("%d", &mes_nasc);
	
	// TRATAMENTO DE ERRO
	if (mes_nasc < 0 || mes_nasc > 12) {
		printf("O mês que você inseriu é inválido! Digite um número entre 1 e 12.");
		return;
	}
	
	switch (mes_nasc){
		case 1:
			if (dia_nasc <= 19)
				printf("Seu signo é: CAPRICÓRNIO");
			else
				printf("Seu signo é: AQUÁRIO");
			break;
			
		case 2:
			if (dia_nasc <= 18)
				printf("Seu signo é: AQUÁRIO");
			else
				printf("Seu signo é: PEIXES");
			break;
			
		case 3:
			if (dia_nasc <= 20)
				printf("Seu signo é: PEIXES");
			else
				printf("Seu signo é: ÁRIES");
			break;
			
		case 4:
			if (dia_nasc <= 19)
				printf("Seu signo é: ÁRIES");
			else
				printf("Seu signo é: TOURO");
			break;
			
		case 5:
			if (dia_nasc <= 20)
				printf("Seu signo é: TOURO");
			else
				printf("Seu signo é: GÊMEOS");
			break;
			
		case 6:
			if (dia_nasc <= 21)
				printf("Seu signo é: GÊMEOS");
			else
				printf("Seu signo é: CÂNCER");
			break;
			
		case 7:
			if (dia_nasc <= 22)
				printf("Seu signo é: CÂNCER");
			else
				printf("Seu signo é: LEÃO");
			break;
			
		case 8:
			if (dia_nasc <= 22)
				printf("Seu signo é: LEÃO");
			else
				printf("Seu signo é: VIRGEM");
			break;
			
		case 9:
			if (dia_nasc <= 22)
				printf("Seu signo é: VIRGEM");
			else
				printf("Seu signo é: LIBRA");
			break;
			
		case 10:
			if (dia_nasc <= 22)
				printf("Seu signo é: LIBRA");
			else
				printf("Seu signo é: ESCORPIÃO");
			break;
			
		case 11:
			if (dia_nasc <= 21)
				printf("Seu signo é: ESCORPIÃO");
			else
				printf("Seu signo é: SAGITÁRIO");
			break;
		
		case 12:
			if (dia_nasc <= 21)
				printf("Seu signo é: SAGITÁRIO");
			else
				printf("Seu signo é: CAPRICÓRNIO");
			break;
		
		default:
			printf("MÊS INVÁLIDO! (como você passou pelo meu 'if'?) =(");
	}
	
	printf("\n\nKAIO GOMES DO NASCIMENTO MAZZA, 25/09/2025");
}