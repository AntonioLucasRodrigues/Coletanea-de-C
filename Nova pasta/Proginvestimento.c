//FMM
//Antonio Lucas Rodrigues I1A
//10/04/22    13:38h

//5)Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa
//em C que leia o tipo de investimento e seu valor, calcule e mostre o seu valor corrigido após um mês de
//investimento, de acordo com o tipo de investimento:

#include<stdio.h>
#include<conio.h>
int main(){
	float val, valc;
	int inv;
	printf("\n Digite o valor para investir: ");
	scanf("%f", &val);
	printf("\n Tipo de investimento");
	printf("\n 1 para poupanca, 2 para fundos de renda fixa, 3 para previdencia privada\n");
	scanf("%d", &inv);
	
	if(inv==1){
		valc= (val*0.03)+ val;
		printf("\n Valor corrigido: R$%.2f", valc);
	} else if(inv==2){
		valc= (val*0.04)+ val;
		printf("\n Valor corrigido: R$%.2f", valc);
}else if(inv==3){
		valc= (val*0.035)+ val;
		printf("\n Valor corrigido: R$%.2f", valc);
}else{
	printf("\n Tipo de investimento nao selecionado");
}
getch();
return 0;
}
