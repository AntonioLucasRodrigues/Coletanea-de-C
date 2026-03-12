//FMM
//Antonio Lucas Rodrigues I1A
//10/04/22    13:38h

//8)Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário digite um número
//fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número:

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	int num;
	printf("\n Digite um numero de 1 a 12 para representar um mes: ");
	scanf("%d", &num);
	
	if(num==1){
		printf("\n JANEIRO");
	}else if(num==2){
		printf("\n FEVEREIRO");
	}else if(num==3){
		printf("\n MARÇO");
	}else if(num==4){
		printf("\n ABRIL");
	}else if(num==5){
		printf("\n MAIO");
	}else if(num==6){
		printf("\n JUNHO");
	}else if(num==7){
		printf("\n JULHO");
	}else if(num==8){
		printf("\n AGOSTO");
	}else if(num==9){
		printf("\n SETEMBRO");
	}else if(num==10){
		printf("\n OUTUBRO");
	}else if(num==11){
		printf("\n NOVEMBRO");
	}else if(num==12){
		printf("\n DEZEMBRO");
	}else{
		printf("\n Número inválido");
	}
	return 0;
}
