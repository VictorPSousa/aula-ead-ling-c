// "Chamam" as bibliotecas, conjunto de subprogramas que possuem c�digos pr�-definidos
#include <stdio.h> // Define a entrada e saida
#include <stdlib.h> // fun��es b�sicas do sistema
#include <locale.h> // Idiomas

/* Coment�rios em bloco - AULAS 1 E 2 */
// Coment�rio em linha

int main(int argc, char *argv[]) 
{
	// A linha abaixo configura o idioma para Portugu�s
	setlocale(LC_ALL, "Portuguese");
	system("color E4"); // Muda a cor do texto, a primeira letra � o BG e a segunda � o texto, �nica letra s� muda o texto
	printf("\n Ol� Mundo!\n");
	system("pause");
	system("cls"); // Limpa a tela
	system("color F0");
	printf("\nProf Jos� de Assis\n");
	system("pause");
	return 0; // fun�ao de retorno, significa que o app encerrou corretamente
}
