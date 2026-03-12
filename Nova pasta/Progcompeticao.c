//FMM
//Antonio Lucas Rodrigues I1A
//10/04/22    13:38h

//7)A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
//programa em C que receba a idade de um nadador e imprimir a sua categoria segundo os dados abaixo:
//- Infantil A ? 5 – 7 anos - Infantil B ? 8 – 10 anos
//- Juvenil A ? 11 – 13 anos - Juvenil B ? 14 – 17 anos
//- Sênior ? maiores de 18 anos

#include<stdio.h>
#include<conio.h>
int main(){
	int idade;
	printf("\n Insira a idade do competidor: ");
	scanf("%d", &idade);
	
	if(idade>=5 && idade<8){
		printf("\n Classe Infantil A");
	}else if(idade>=8 && idade<11){
		printf("\n Classe Infantil B");
}else if(idade>=11 && idade<14){
		printf("\n Classe Juvenil A");
	}else if(idade>=14 && idade<18){
		printf("\n Classe Juvenil B");
	}else if(idade>=18 && idade<100){
		printf("\n Classe senior");
	}
	else {
		printf("\n competidor nao apto");
	}
	getch();
	return 0;
}
