//FMM
//Antonio Lucas Rodrigues  I1A
//Ra: 227113
//09/04/22    	16:12h
//Elabore um programa em C que leia o valor de dois números inteiros e o operador aritmético desejado:
//calcule, então, a resposta adequada.

#include<stdio.h>
#include<conio.h>
int main() {
float n1, n2;
char op;
printf("\nUse os operadores + para soma, - para subtracao, / para divisao, * para multiplicacao");
printf("\n Informe um numero, um operador e um segundo numero: \n");
fflush(stdin);
scanf(" %f %c %f", &n1, &op, &n2);
if ( op == '+' ) {
printf("\n A soma e: %f ", n1 + n2 );
} else if (op == ' - ' ) {

printf("\n A subtração e: %f ", n1 - n2 );
} else if (op == ' * ' ){
printf("\n A multiplicação e %f ", n1 * n2 );
} else if (op == ' / ' ){
printf("\n A divisão e: %f ", n1 / n2 );
} else {

printf("\n Operador desconhecido " );
}
getch();
return 0;
}
