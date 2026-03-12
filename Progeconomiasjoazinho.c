//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  
//RA:227113

//5)Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
//algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
//Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo
//moeda de um tipo, a quantidade respectiva deve ser zero:

#include<stdio.h>
int main(){
    float d1, d5, d10, d25, d50, d100, economia;
	printf("\n Quantas moedas de 1 centavo possui");
	scanf("%f", &d1);
	
	printf("\n Quantas moedas de 5 centavos possui");
	scanf("%f", &d5);
	
	printf("\n Quantas moedas de 10 centavos possui");
	scanf("%f", &d10);
	
	printf("\n Quantas moedas de 25 centavos possui");
	scanf("%f", &d25);
	
	printf("\n Quantas moedas de 50 centavos possui");
	scanf("%f", &d50);
	
	printf("\n Quantas moedas de 1 real possui");
	scanf("%f", &d100);	
	
	economia= d1*0.01 + d5*0.05 + d10*0.1 + d25*0.25 + d50*0.5 +d100;
	printf("\n O total economizado foi de R$%.2f  ", economia);
	
	return 0;
}

