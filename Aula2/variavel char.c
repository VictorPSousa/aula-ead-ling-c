#include <stdio.h>
#include <stdlib.h>

/* AULA 3 - Uso da vari�vel do tipo char */

int main(int argc, char *argv[]) 
{
	char nome[50];// char aceita caracteres da tabela ASCII, entre colchetes � o tamanho m�ximo, em caracteres aceit�veis
	printf("Digite seu nome: ");
	gets(nome);
	system("cls");
	printf("Bem vindo %s\n",nome);
	system("pause");
	return 0;
}
