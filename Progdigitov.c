//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  18:06h
//RA:227113

//9)Escreva um algoritmo que leia um código de cinco algarismos (variável Codigo) e gere o digito verificador
//(DigitoV) módulo 7 para o mesmo. Supondo que os cinco algarismos do código são ABCDE, uma forma de
//calcular o dígito desejado, com módulo 7 é:
//DigitoV = resto da divisão de S por 7, onde
//S = 6*A + 5*B + 4*C + 3*D + 2*E

#include<stdio.h>
#include<locale.h>
int main(){
	float a, b, c, d, e, DigitoV;
	int S;
	printf("\n Insira 5 algarismos");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	S= 6*a + 5*b + 4*c + 3*d + 2*e;
	DigitoV= S % 7;
	
	printf("\nDigitoV = %.f", DigitoV);
	return 0;
	
}

