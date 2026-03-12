//FMM
//Lógica e técnica de programação
//Antonio Lucas de Melo Barbosa Mendes Rodrigues
// data 02/04/22  
//RA:227113

//6)Considerando que, para um consórcio, sabe-se o número total de prestações, a quantidade de prestações
//pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago pelo consorciado e o
//saldo devedor:

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"ptb");
     float p, vp, total, pp, devendo;
     printf("\n Quantas prestações tem ao total  ");
     scanf("%f", &p);
     printf("\n Quanto é o valor da prestação?    R$");
     scanf("%f", &vp);
     
     printf("\nQuantas prestações foram pagas?");
     scanf("%f", pp);
     
     total= p*vp;
     devendo= vp*(pp-p);
     printf("\nSALDO DEVEDOR R$.2f ", devendo);
     printf("\n O valor total do consórcio é R$%.2f     ", total);
     
     
     return 0;
}
