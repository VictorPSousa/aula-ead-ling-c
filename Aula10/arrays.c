#include <stdio.h>
#include <stdlib.h>

/* 
	Victor Sousa
	Curso básico de Linguagem C
	Aula 10 - Arrays (simples e multidimensional)
 */

int main(int argc, char *argv[]) {
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	// Exibindo o conteúdo da variável nota3 sem o uso de array.
	printf("Sem Array\n");
	printf("Nota3: %.1f\n", nota3);
	//A linha abaixo cria um array de tamanho 4
	float notas[4]={8,6,9,3};
	printf("Com array\n");
	printf("Nota3: %.1f\n", notas[2]);
	// A linha abaixo modifica o conteúdo de um array
	notas[1]=7;
	printf("Modificando o conteudo do array\n");
	printf("Nota2: %.1f\n", notas[1]);
	float boletim[2][4]={{8,7,9,3},{4,5,8,6}};
	// Recuperando a nota
	printf("Array Multidimensional\n");
	printf("Nota: %.1f\n", boletim[1][0]);
    system("pause");
	return 0;
}
