#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float criancas_masculinas, criancas_femininas, per_masc, per_fem, per_menos24, menos_24meses;
	int cont_criancas, tempo_vida, i;
	char sexo;
	
	printf("Digite o número de crinaças nascidas dentro de um período: ");
	scanf("%d", cont_criancas);
	
	for(i = 1; i <= cont_criancas, i++) {
		printf("\nDigite o sexo da criança %d (somente M ou F): ", i);
		scanf("%d%*c", sexo);
		
		if (sexo == 'm' || sexo == 'M') {
			criancas_masculinas++;
		}
		else if (sexo == 'f' || sexo == 'F') {
			criancas_femininas++;
		} else {
			printf("\nValor inválido! Somente é aceito M ou F");
		}
		
		printf("\nDigite o tempo de vida (em meses) que a criança teve: ");
		scanf("%d%*c", tempo_vida);
		
		if (tempo_vida < 24){
			menos_24meses++;
		}
	}
	
	// Processamento de resultados
	per_masc = (criancas_masculinas / cont_criancas) * 100;
	per_fem = (criancas_femininas / cont_criancas) * 100;
	per_masc = (menos_24meses / cont_criancas) * 100;
	
	printf("Percentual de crinaças do sexo masculino mortas: %0.2f", per_masc * 100);
	printf("Percentual de crinaças do sexo masculino mortas: %0.2f", per_fem * 100);
	printf("Percentual de crianças com menos de 24 meses de vida: $0.2f", per_menos24 * 100);
	
	printf("\nKaio Gomes do Nascimento Mazza, 01/10/2025");
}