#include<stdio.h>
#include<conio.h>
int main(){
	
	int a, b, res;
	char op;
	printf("\nOperadores: + para soma, - para subtração, * para multiplicação ou / para divisão");
	printf("\nInsira dois numeros e um operador: ");
	scanf("%f %c %f", &a, &b, &op);
	
if ( op == '+' ) {
printf("\n A soma é: %.2f ", n1 + n2);
} else if (op == " - " ) {

printf("\n A subtração é: %.2f ", n1 - n2 );
} else if (op == " * " ){
printf("\n A multiplicação é: %.2f ", n1 * n2 );
} else if (op == " / " ){
printf("\n A divisão é: %.2f ", n1 / n2 );
} else {

printf("\n Operador desconhecido " );
}
	getch();
	return 0;
}
