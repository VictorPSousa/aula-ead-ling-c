#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* 
	Victor Sousa
	Curso Básico de Linguagem C
	Desenvolvimento do Jogo Jokenpô 
*/

int jescolhe, resposta;
char nome[50];

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("\nOlá Jogador, Digite seu nome: ");
	gets(nome);
	do{
		system("color 07");
		system("cls");
     	printf("Bem vindo(a) %s!\n\n Instruções para jogar Jokenpô:\n1- Pedra\n2- Papel\n3- Tesoura\n\n",nome);
		srand(time(NULL));
		int cescolhe = rand()%3 + 1;
		printf("Escolha sua jogada: ");
		scanf("%d", &jescolhe);
		if(jescolhe>3 || jescolhe<=0){
			printf("Por favor, escolha uma opção válida!\n");
			system("color F5");
		}else{ 
		char jog[30] = "";
		char cjog[30] = "";
			if(jescolhe == 3){
				char jog[30]="Tesoura";
				printf("Você jogou %s\n", jog);					
				}
			if(jescolhe == 2){
				char jog[30]="Papel";
				printf("Você jogou %s\n", jog);					
				}
			if(jescolhe == 1){
				char jog[30]="Pedra";
				printf("Você jogou %s\n", jog);					
				}
			if(cescolhe == 3){
				char cjog[30]="Tesoura";
				printf("Seu adversário jogou %s\n\n", cjog);				
				}
			if(cescolhe == 2){
				char cjog[30]="Papel";
				printf("Seu adversário jogou %s\n\n", cjog);				
				}
			if(cescolhe == 1){
				char cjog[30]="Pedra";
				printf("Seu adversário jogou %s\n", cjog);				
				}		
				if(jescolhe==1 && cescolhe==3){
					printf("\nParabéns, você ganhou!\n\n");
			    	system("color 2F");
				}if (jescolhe==2 && cescolhe==1){
					printf("\nParabéns, você ganhou!\n\n");						
	                system("color 2F");
				}if (jescolhe==3 && cescolhe==2){
					printf("\nParabéns, você ganhou!\n\n");	
			    	system("color 2F");
			    }if(jescolhe==3 && cescolhe==1){
					printf("\nÉ uma pena, você foi derrotado!\n\n");
					system("color 40");	
				}if(jescolhe==1 && cescolhe==2){
					printf("\nÉ uma pena, você foi derrotado!\n\n");
					system("color 40");	
				}if(jescolhe==2 && cescolhe==3){
					printf("\nÉ uma pena, você foi derrotado!\n\n");
					system("color 40");	
				}if(jescolhe == cescolhe){
					printf("Empate!\n\n");
					system("color 9F");
				}
		}
		printf("\n1- Jogar Novamente\n2- Sair do jogo\nDigite a opcao desejada: ");
		scanf("%d", &resposta);
	}while(resposta != 2);	
	system("pause");
	return 0;
}
