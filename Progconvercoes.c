//FMM
//Lógica e técnica de programação  
//Antonio Lucas de Melo Barbosa Mendes Rodrigues  RA:227113
// dia: 01/04/22   20:45h
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"ptb");
	float valor, dolar, marco, libra;
	printf("\n Informe o valor a ser convertido");
	scanf("%f", &valor);
	dolar= valor*2.98;
	marco= valor*2.10;
	libra= valor*2.65;
	
	printf("\n O valor convertido em dolar é R$%.2f", dolar);
	printf("\n O valor convertido em marco alemão é R$%.2f", marco);
	printf("\n O valor convertido em libra é R$%.2f  ", libra);
	
	system("pause");
	return 0;
}
