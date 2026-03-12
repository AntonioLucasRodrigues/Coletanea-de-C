//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  

//Saymon comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
//mesma. Faça um algoritmo que receba o peso do saco de ração e a quantidade de ração fornecida para
//cada gato, calcule e mostre quanto restará de ração no saco após seis dias:

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"ptb");
	float saco, racaopdia, resto=0;
	printf("\nQuantos kg tem o saco de ração ");
	scanf("%f", &saco);
	
	printf("1kg=1000g");
	
	printf("\n Quantos gramas de ração cada gato consome");
	scanf("%f", &racaopdia);
	
	resto= (racaopdia*2*6)/saco;
	printf("\n O resto após 6 dias de uso da ração é %.2f", resto);
	return 0;
}
