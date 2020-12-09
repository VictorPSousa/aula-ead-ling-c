#include <stdio.h>
#include <stdlib.h>

/* AULA 5 - Prograga para o cálculo da média das notas de um aluno: Variável do tipo float 
e estruturas de decisão */

int main(int argc, char *argv[])
{
	float nota1, nota2, media;
	printf("Digite a 1 nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2 nota: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("Media: %f\n",media);
	
	system("pause");
	return 0;
}
