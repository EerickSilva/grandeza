#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int comb, grandeza;
	float V, I, P, R;

	while (comb <= 0 || comb >=6){
		printf("Quais informações você tem?(Digite o número relacionado as informações que você tem)\n 1-Tensão e Corrente \n 2-Tensão e Potência \n 3-Tensão e Resistência \n 4-Corrente e Potência \n 5-Corrente e Resistência \n");
		scanf("%d", &comb);
		system("cls");
	}
	
	switch(comb){
		case 1:
			printf("Digite a Tensão: ");
			scanf("%f", &V);
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que você deseja descobrir? \n 1-Potência \n 2-Resistência\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um número correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					P = V * I;
					printf("Potência: %fW", P);
					break;
				case 2:
					R = V/I;
					printf("Resistência: %fOhw", R);
					break;	
			}
			
			break;
		case 2:
			printf("Digite a Tensão: ");
			scanf("%f", &V);
			printf("Digite a Potência: ");
			scanf("%f", &P);
			
			while(grandeza < 1 || grandeza > 2){
				printf("O que você deseja descobrir? \n 1-Corrente \n 2-Resistência\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um número correto!");
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
					printf("Resistência: %fOhw", R);
					break;	
			}
			break;
		case 3:
			printf("Digite a Tensão: ");
			scanf("%f", &V);
			printf("Digite a Resistência: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que você deseja descobrir? \n 1-Corrente \n 2-Potência\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um número correto!");
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
					printf("Potência: %fW", P);
					break;	
			}
			break;
		case 4:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Potência: ");
			scanf("%f", &P);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que você deseja descobrir? \n 1-Tensão \n 2-Resistência\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um número correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					V = P/I;
					printf("Tensão: %fV", V);
					break;
				case 2:
					R = (P/I)*I;
					printf("Resistência: %fOhw", R);
					break;	
			}
			break;
		case 5:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Resistência: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que você deseja descobrir? \n 1-Tensão \n 2-Potência\n");
				scanf("%d", &grandeza);
			if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um número correto!");
					break;
					
				}
			}
			
			switch (grandeza){
				case 1:
					V = R*I;
					printf("Tensão: %fV", V);
					break;
				case 2:
					P = (I*R)*I;
					printf("Potência: %fW", P);
					break;	
			}
			break;
	}
	
	return 0;
} 
