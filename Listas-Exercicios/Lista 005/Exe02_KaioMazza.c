#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media_aluno, media_classe, tot_classe;
	int cont_alunos = 1, tot_reprovados = 0, tot_aprovados = 0, tot_exames = 0;
	
	while (cont_alunos <= 6) {
		printf("\n----------------");
		printf("\nDigite a 1ª nota do aluno %d: ", cont_alunos);
		scanf("%f%*c", &nota1);
		
		printf("\nDigite a 2ª nota do aluno %d: ", cont_alunos);
		scanf("%f%*c", &nota2);
		
		media_aluno = (nota1+nota2) / 2;
		
		printf("\n\nA média aritmética do aluno %d é: %0.2f", cont_alunos, media_aluno);
		
		tot_classe = tot_classe + media_aluno;
		
		if (media_aluno < 3) {
			tot_reprovados++;
			printf(" | Situação: Reprovado");
		} else if (media_aluno <= 7) {
			tot_exames++;
			printf(" | Situação: Exame");
		} else {
			tot_aprovados++;
			printf(" | Situação: Aprovado");
		}
		
		cont_alunos++;
	}
	
	media_classe = tot_classe / 6;
	
	printf("\n\n----------------");
	printf("\nTotal de alunos Aprovados: %d", tot_aprovados);
	printf("\nTotal de alunos em Exame: %d", tot_exames);
	printf("\nTotal de alunos Reprovados: %d", tot_reprovados);
	printf("\nMédia geral da classe: %0.2f", media_classe);
	
	printf("\n\nKaio Gomes do Nascimento Mazza - Lista 005 (while)");
}