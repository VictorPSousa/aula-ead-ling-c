#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Aula 4 - Exemplo da vari�vel do tipo int
Estruturas de decis�o
*/

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Sua idade �: %d",idade);
	// A linha abaixo executa uma estrutura de decis�o
	if(idade<18)
	{
		printf("\nMenor de idade\n");
	}
	if(idade>=18){
		printf("\nMaior de idade\n");
	}
	system("pause");
	return 0;
}
