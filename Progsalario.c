//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  17:28h
//RA:227113

//7)Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que leia o valor do salário
//mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos esta pessoa ganha:

#include<stdio.h>

int main(){
	float sal, salmin;
	int qts;
	printf("\n Insira o valor do salario minimo atual R$");
	scanf("%f", &salmin);
	printf("\n Insira o valor do seu salario  R$");
	scanf("%f", &sal);
	
	qts= sal/salmin;
	printf("\nVoce ganha %d salarios minimos", qts);
	return 0;
}
