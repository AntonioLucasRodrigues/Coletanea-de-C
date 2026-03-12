//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  18:06h
//RA:227113

//10)Uma pessoa comprou cinco artigos em uma loja. Para cada artigo, tem-se nome, preço e percentual de
//desconto. Faça um algoritmo que imprima o nome, preço e o preço com desconto de cada artigo da loja.
//No final apresente também o total a pagar:

#include<stdio.h>
#include<locale.h>
int main(){
	system("color 5");
	setlocale(LC_ALL,"ptb");
	char n1[50], n2[50], n3[50], n4[50], n5[50];
	float p1, p2, p3, p4, p5, d1, d2, d3, d4, d5, totalsd, totalcd;
	
	printf("\nQual o nome do 1o artigo");
	scanf("%s", &n1);
	printf("\nQual o nome do 2o artigo");
	scanf("%s", &n2);
	printf("\nQual o nome do 3o artigo");
	scanf("%s", &n3);
	printf("\nQual o nome do 4o artigo");
	scanf("%s", &n4);
	printf("\nQual o nome do 5o artigo");
	scanf("%s", &n5);
	fflush(stdin);
	printf("\nQuanto custa o 1o artigo	R$");
	scanf("%f", &p1);
	printf("\nQuanto custa o 2o artigo	R$");
	scanf("%f", &p2);
	printf("\nQuanto custa o 3o artigo	R$");
	scanf("%f", &p3);
	printf("\nQuanto custa o 4o artigo	R$");
	scanf("%f", &p4);
	printf("\nQuanto custa o 5o artigo	R$");
	scanf("%f", &p5);
	
	system("pause");
	system("color 2");
	printf("\nQual o desconto do 1o produto  ex: 5%= 0,05:");
	scanf("%f", &d1);
	printf("\nQual o desconto do 2o produto  ex: 5%= 0,05:");
	scanf("%f", &d2);
	printf("\nQual o desconto do 3o produto  ex: 5%= 0,05:");
	scanf("%f", &d3);
	printf("\nQual o desconto do 4o produto  ex: 5%= 0,05:");
	scanf("%f", &d4);
	printf("\nQual o desconto do 5o produto  ex: 5%= 0,05:");
	scanf("%f", &d5);
	
	totalsd= p1+p2+p3+p4+p5;
	printf("\n Total sem desconto R$%.2f", totalsd);
	
	totalcd=totalsd-(p1*d1+p2*d2+p3*d3+p4*d4+p5*d5);
	printf("\n Total com desconto R$%.2f", totalcd);
	
	return 0;
	
	
}
