//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  17:50h
//RA:227113

//8)Escreva um algoritmo que leia três números inteiros (A, B, C) e calcule a seguinte expressão:
//D = R + S sabendo que: R = ( A + B )**2/2
//e S = ( B + C )**2/2

#include<stdio.h>
int main (){
	int A, B, C;
	float D, R, S;
	printf("\n Digite tres numeros inteiros");
	scanf("%d %d %d", &A, &B, &C);
	
	R= (A*A+ 2*A*B + B*B )/2;
	S = (B*B+ 2*B*C + C*C)/2;
	D = R + S;
	printf("\n Resultado %.f", D);
	
	return 0;
}
