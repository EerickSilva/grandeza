#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int comb, grandeza;
	float V, I, P, R;

	while (comb <= 0 || comb >=6){
		printf("Quais informa��es voc� tem?(Digite o n�mero relacionado as informa��es que voc� tem)\n 1-Tens�o e Corrente \n 2-Tens�o e Pot�ncia \n 3-Tens�o e Resist�ncia \n 4-Corrente e Pot�ncia \n 5-Corrente e Resist�ncia \n");
		scanf("%d", &comb);
		system("cls");
	}
	
	switch(comb){
		case 1:
			printf("Digite a Tens�o: ");
			scanf("%f", &V);
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voc� deseja descobrir? \n 1-Pot�ncia \n 2-Resist�ncia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um n�mero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					P = V * I;
					printf("Pot�ncia: %fW", P);
					break;
				case 2:
					R = V/I;
					printf("Resist�ncia: %fOhw", R);
					break;	
			}
			
			break;
		case 2:
			printf("Digite a Tens�o: ");
			scanf("%f", &V);
			printf("Digite a Pot�ncia: ");
			scanf("%f", &P);
			
			while(grandeza < 1 || grandeza > 2){
				printf("O que voc� deseja descobrir? \n 1-Corrente \n 2-Resist�ncia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um n�mero correto!");
					break;
				}
					 
			}

			switch (grandeza){
				case 1:
					I = P/V;
					printf("Corrente: %fA", I);
					break;
				case 2:
					R = (P/V)*V;
					printf("Resist�ncia: %fOhw", R);
					break;	
			}
			break;
		case 3:
			printf("Digite a Tens�o: ");
			scanf("%f", &V);
			printf("Digite a Resist�ncia: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voc� deseja descobrir? \n 1-Corrente \n 2-Pot�ncia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um n�mero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					I = V/R;
					printf("Corrente: %fA", I);
					break;
				case 2:
					P = V*(V/R);
					printf("Pot�ncia: %fW", P);
					break;	
			}
			break;
		case 4:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Pot�ncia: ");
			scanf("%f", &P);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voc� deseja descobrir? \n 1-Tens�o \n 2-Resist�ncia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um n�mero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					V = P/I;
					printf("Tens�o: %fV", V);
					break;
				case 2:
					R = (P/I)*I;
					printf("Resist�ncia: %fOhw", R);
					break;	
			}
			break;
		case 5:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Resist�ncia: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voc� deseja descobrir? \n 1-Tens�o \n 2-Pot�ncia\n");
				scanf("%d", &grandeza);
			if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um n�mero correto!");
					break;
					
				}
			}
			
			switch (grandeza){
				case 1:
					V = R*I;
					printf("Tens�o: %fV", V);
					break;
				case 2:
					P = (I*R)*I;
					printf("Pot�ncia: %fW", P);
					break;	
			}
			break;
	}
	
	return 0;
} 
