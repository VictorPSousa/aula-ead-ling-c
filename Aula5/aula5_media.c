#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1, nota2, media;
	printf("Digite a 1 nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2 nota: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("Media: %.2f\n",media);// Casas Decimais
	if(media<6){
		printf("\nAluno reprovado\n");
	}else{
		printf("\nAluno aprovado\n");
	}
	system("pause");
	return 0;
}
