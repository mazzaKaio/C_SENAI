#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media_aluno;
	int cont_alunos = 1, tot_reprovados, tot_aprovados, tot_exames, tot_classe, media_classe;
	
	while (cont_alunos <= 6) {
		printf("\n----------------");
		printf("\nDigite a 1ª nota do aluno %d: ", cont_alunos);
		scanf("%f%*c", &nota1);
		
		printf("\nDigite a 2ª nota do aluno %d: ", cont_alunos);
		scanf("%f%*c", &nota2);
		
		media_aluno = (nota1+nota2) / 2;
		tot_classe += media_aluno;
		
		printf("\n\nA média aritmética do aluno %d é: %0.2f", cont_alunos, media_aluno);
		
		if (media_aluno < 3) {
			printf(" | Situação: Reprovado");
			tot_reprovados++;
		} else if (media_aluno <= 7) {
			printf(" | Situação: Exame");
			tot_exames++;
		} else {
			printf(" | Situação: Aprovado");
			tot_aprovados++;
		}
		
		cont_alunos++;
	}
	
	media_classe = tot_classe/6;
	
	printf("\n\n----------------");
	printf("\nTotal de alunos Aprovados: %d", tot_aprovados);
	printf("\nTotal de alunos em Exame: %d", tot_exames);
	printf("\nTotal de alunos Reprovados: %d", tot_reprovados);
	printf("\nMédia geral da classe: %0.2f", media_classe);
	
	printf("\n\nKaio Gomes do Nascimento Mazza - Lista 005 (while)");
}