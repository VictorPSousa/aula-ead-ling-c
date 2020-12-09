#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* 
	Victor Sousa
	Curso B�sico de Linguagem C
	Desenvolvimento do Jogo Jokenp� 
*/

int jescolhe, resposta;
char nome[50];

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("\nOl� Jogador, Digite seu nome: ");
	gets(nome);
	do{
		system("color 07");
		system("cls");
     	printf("Bem vindo(a) %s!\n\n Instru��es para jogar Jokenp�:\n1- Pedra\n2- Papel\n3- Tesoura\n\n",nome);
		srand(time(NULL));
		int cescolhe = rand()%3 + 1;
		printf("Escolha sua jogada: ");
		scanf("%d", &jescolhe);
		if(jescolhe>3 || jescolhe<=0){
			printf("Por favor, escolha uma op��o v�lida!\n");
			system("color F5");
		}else{ 
		char jog[30] = "";
		char cjog[30] = "";
			if(jescolhe == 3){
				char jog[30]="Tesoura";
				printf("Voc� jogou %s\n", jog);					
				}
			if(jescolhe == 2){
				char jog[30]="Papel";
				printf("Voc� jogou %s\n", jog);					
				}
			if(jescolhe == 1){
				char jog[30]="Pedra";
				printf("Voc� jogou %s\n", jog);					
				}
			if(cescolhe == 3){
				char cjog[30]="Tesoura";
				printf("Seu advers�rio jogou %s\n\n", cjog);				
				}
			if(cescolhe == 2){
				char cjog[30]="Papel";
				printf("Seu advers�rio jogou %s\n\n", cjog);				
				}
			if(cescolhe == 1){
				char cjog[30]="Pedra";
				printf("Seu advers�rio jogou %s\n", cjog);				
				}		
				if(jescolhe==1 && cescolhe==3){
					printf("\nParab�ns, voc� ganhou!\n\n");
			    	system("color 2F");
				}if (jescolhe==2 && cescolhe==1){
					printf("\nParab�ns, voc� ganhou!\n\n");						
	                system("color 2F");
				}if (jescolhe==3 && cescolhe==2){
					printf("\nParab�ns, voc� ganhou!\n\n");	
			    	system("color 2F");
			    }if(jescolhe==3 && cescolhe==1){
					printf("\n� uma pena, voc� foi derrotado!\n\n");
					system("color 40");	
				}if(jescolhe==1 && cescolhe==2){
					printf("\n� uma pena, voc� foi derrotado!\n\n");
					system("color 40");	
				}if(jescolhe==2 && cescolhe==3){
					printf("\n� uma pena, voc� foi derrotado!\n\n");
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
