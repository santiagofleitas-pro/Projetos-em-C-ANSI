//Projeto Calculadora - C ANSI
// Santiago Fleitas

#include <stdio.h>
//Funções e sub-rotinas
void pegarNumeros();
float somarNumeros(float n1, float n2);
float subtrairNumeros(float n1, float n2);
float dividirNumeros(float n1, float n2);
float multiplicarNumeros(float n1, float n2);

//Variáveis Globais
float x, y;

int main (void){
//Variáveis Locais
	int option;
	
	do{
		printf("Programa desenvolvido por Santiago Fleitas.\n");
		printf("Calculadora simples.\n\n\n");
		printf("O que voce deseja fazer?\n\n");
		printf("1 - SOMA (+)\n");
		printf("2 - SUBTRACAO (-)\n");
		printf("3 - DIVISAO (/)\n");
		printf("4 - MULTIPLICACAO (*)\n");
		printf("5 - SAIR\n\n");
		printf("Digite sua opcao: ");
		scanf("%i", &option);
		system("cls");
		if(option==5){
			printf("Voce saiu do programa.");
			break;
		}
		if(option <= 0 || option > 5){
			printf("Numero invalido, digite outro numero.\n\n");
			system("pause");
			system("cls");
		}
		
		if(option >= 1 && option < 5){	
		pegarNumeros();
		
		switch(option){
			case 1:
				printf("Soma escolhida (+)\n");
				somarNumeros(x, y);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 2:
				printf("Subtracao escolhida (-)\n");
				subtrairNumeros(x, y);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 3:
				printf("Divisao escolhida (/)\n");
				dividirNumeros(x, y);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 4:
				printf("Multiplicacao escolhida (*)\n");
				multiplicarNumeros(x, y);
				printf("\n");
				system("pause");
				system("cls");
				break;
			default:
				printf("Erro\n");
				break;
		}
			}
			
	}while(option!=5);
	
	return 0;
}

void pegarNumeros(){
	printf("Digite um numero: ");
	scanf("%f", &x);
	printf("Digite outro: ");
	scanf("%f", &y);
}

float somarNumeros(float n1, float n2){
	printf("Resultado: %.2f\n", n1+n2);
}

float subtrairNumeros(float n1, float n2){
	printf("Resultado: %.2f\n", n1-n2);
}

float dividirNumeros(float n1, float n2){
	printf("Resultado: %.2f\n", n1/n2);
}

float multiplicarNumeros(float n1, float n2){
	printf("Resultado: %.2f\n", n1*n2);
}
