#include <stdio.h>
#include <stdlib.h>

/* AULA 3 - Uso da variável do tipo char */

int main(int argc, char *argv[]) 
{
	char nome[50];// char aceita caracteres da tabela ASCII, entre colchetes é o tamanho máximo, em caracteres aceitáveis
	printf("Digite seu nome: ");
	gets(nome);
	system("cls");
	printf("Bem vindo %s\n",nome);
	system("pause");
	return 0;
}
