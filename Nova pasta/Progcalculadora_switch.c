//FMM
//Antonio Lucas Rodrigues I1A
//09/04/22    16:18h
//1)Elabore um programa em C que leia o valor de dois números inteiros e o operador aritmético desejado:
//calcule, então, a resposta adequada.
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"ptb");
float a, b;
char op;
printf("\nUse os operadores + para soma, - para subtracao, / para divisao, * para multiplicacao");
printf("\n Informe um numero, um operador e um segundo numero: \n");
scanf(" %f %c %f", &a, &op, &b);
switch(op){
	case '+': printf("\n A soma é: %.2f", a+b);break;
	case '-': printf("\n A subtração é: %.2f", a-b);break;
	case '*': printf("\n A multiplicação é: %.2f", a*b);break;
	case '/': printf("\n A divisão é: %.2f", a/b);break;
	default:("\n operador invalido");
}
getch();
return 0;
}
