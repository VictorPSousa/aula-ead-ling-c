// "Chamam" as bibliotecas, conjunto de subprogramas que possuem códigos pré-definidos
#include <stdio.h> // Define a entrada e saida
#include <stdlib.h> // funções básicas do sistema
#include <locale.h> // Idiomas

/* Comentários em bloco - AULAS 1 E 2 */
// Comentário em linha

int main(int argc, char *argv[]) 
{
	// A linha abaixo configura o idioma para Português
	setlocale(LC_ALL, "Portuguese");
	system("color E4"); // Muda a cor do texto, a primeira letra é o BG e a segunda é o texto, única letra só muda o texto
	printf("\n Olá Mundo!\n");
	system("pause");
	system("cls"); // Limpa a tela
	system("color F0");
	printf("\nProf José de Assis\n");
	system("pause");
	return 0; // funçao de retorno, significa que o app encerrou corretamente
}
