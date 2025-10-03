#include <stdio.h>
#include <locale.h>

main() {
	// DESAFIO HARDCORE! FEITO NO DIA 02/10/2025
		setlocale(LC_ALL, "Portuguese");
	float preco_unitario, custo_est, tot_impostos, tot_estocagem, media_add, maior_preco = 0, menor_preco, imposto, preco_imposto, preco_final;
	int qnt_barato = 0, qnt_normal = 0, qnt_caro = 0, cont;
	char refrigeracao = 's', categoria = 'A';
	
	for(cont = 1; cont <= 12; cont++) {
		printf("\n\n---------NOVO PROD.---------");
		printf("\nDigite o preço unitário do produto '%d': ", cont);
		scanf("%f%*c", &preco_unitario);
		
		printf("\nSelecione se esse produto precisa de REFRIGERAÇÃO [S/N]: ");
		scanf("%c%*c", &refrigeracao);
		
		while (refrigeracao != 's' && refrigeracao != 'S' && refrigeracao != 'n' && refrigeracao != 'N') {
			printf("\nOpção inválida! Insira novamente [S/N]: ");
			scanf("%c%*c", &refrigeracao);
		}
		
		printf("\nSelecione a CATEGORIA desse produto [A/L/V]\n(A = Alimentação | L = Limpeza | V = Vestuário): ");
		scanf("%c%*c", &categoria);
		
		// !!!!! PRECISO FAZER A VERIFICAÇÃO !!!!!
		
		// CALCULA O CUSTO DA ESTOCAGEM
		if (preco_unitario < 20) {
			
			if (categoria == 'A' || categoria == 'a')
				custo_est = 2.00;
			else if (categoria == 'L' || categoria == 'l')
				custo_est = 3.00;
			else if (categoria == 'V' || categoria == 'v')
				custo_est = 4.00;
				
		} else if (preco_unitario <= 50) {
			
			if (refrigeracao == 'S' || refrigeracao == 's') 
				custo_est = 6.00;
			else if (refrigeracao == 'N' || refrigeracao == 'n') 
				custo_est = 0.00;
			
		} else if (preco_unitario > 50) {
			
			if (refrigeracao == 'S' || refrigeracao == 's') {
				
				if (categoria == 'A' || categoria == 'a')
					custo_est = 5.00;
				else if (categoria == 'L' || categoria == 'l')
					custo_est = 2.00;
				else if (categoria == 'V' || categoria == 'v')
					custo_est = 4.00;
					
			} else {
				if (categoria == 'A' || categoria == 'a' || categoria == 'V' || categoria == 'v')
					custo_est = 0.00;
				else if (categoria == 'L' || categoria == 'l')
					custo_est = 1.00;
			}
			
		}
		

		printf("\nO valor da estocagem para este produto é: %0.2f", custo_est);
		
		// TOTAL ESTOCAGEM
		tot_estocagem = tot_estocagem + custo_est;
		
		// IMPOSTO
		if (categoria == 'A' || categoria == 'a' || refrigeracao == 'S' || refrigeracao == 's')
			imposto = 0.04;
		else 
			imposto = 0.02;
		
		//PREÇO IMPOSTO
		preco_imposto = preco_unitario * imposto;
		tot_impostos = tot_impostos + preco_imposto;
		
		//PREÇO FINAL
		preco_final = preco_unitario + custo_est + preco_imposto;
		
		printf("\nIMPOSTO: %0.2f", preco_imposto);
		
		if (preco_final < 20) {
			printf("\nO preço final é: R$%0.2f | Classficação: Barato");
			qnt_barato++;
		}
		else if (preco_final <= 100) {
			printf("\nO preço final é: R$%0.2f | Classficação: Normal");
			qnt_normal++;
		}
		else {
			printf("\nO preço final é: R$%0.2f | Classficação: Caro");
			qnt_caro++;
		}
	}
	
	media_add = (tot_impostos + tot_estocagem) / 2;
	
	printf("\n\n------------- TABELA FINAL -------------");
	printf("\nMédia dos custos adicionais: %.2f", media_add);
	printf("\nMaior preço final: %.2f", maior_preco);
	printf("\nMenor preço final: %.2f", menor_preco);
	printf("\nTotal de impostos: R$%.2f", tot_impostos);
	printf("\nQuantidade de produtos 'Barato': %d", qnt_barato);
	printf("\nQuantidade de produtos 'Normal': %d", qnt_normal);
	printf("\nQuantidade de produtos 'Caro': %d", qnt_caro);
	
	printf("Kaio Mazza, 02/10/2025, com muito suor e labuta, paz");
}