#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Curso b�sico de linguagem C 
Aula 7 - Fun��o
*/

void teste(void);

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	printf("Exemplo de Fun��o\n\n");
	teste();
	teste();
	printf("Fim\n");	
	system("pause");
	return 0;
}

void teste(void){
	printf("Prof Z� de Assis\n");
}
