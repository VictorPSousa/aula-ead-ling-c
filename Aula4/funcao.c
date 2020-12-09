#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Curso básico de linguagem C 
Aula 7 - Função
*/

void teste(void);

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	printf("Exemplo de Função\n\n");
	teste();
	teste();
	printf("Fim\n");	
	system("pause");
	return 0;
}

void teste(void){
	printf("Prof Zé de Assis\n");
}
