#include <stdio.h>
#include <stdlib.h>

/* Aula 8 - Estrutura de repetição */

int numero,resposta;
int contador=0;

int main(int argc, char *argv[]) 
{
	do
{
	system("cls");
	printf("Tabuada\n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d", &numero);
	// A linha abaixo gera um laço finito
	for(contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n",numero,contador,numero*contador);
	}
	printf("\n1- Novo Calculo\n");
	printf("2- Sair\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", &resposta);

}while(resposta != 2);	
	system("pause");
	return 0;
}
