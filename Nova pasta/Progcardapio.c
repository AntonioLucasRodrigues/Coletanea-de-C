//FMM
//Antonio Lucas Rodrigues I1A
//10/04/22    15:18h

//9)Crie um programa em C que exiba um cardápio com as opções: 1: Pizza, 2: Picanha e 3: Peixe Frito. Ao
//selecionar uma das opções:1, 2 e 3 deverá exibir a mensagem: “Opção (número) : (nome do prato), pedido
//realizado com sucesso”.

#include<stdio.h>
#include<conio.h>
int main(){
	int opc;
	printf("\n Menu:");
	printf("\n -PIZZA");
	printf("\n -PICANHA");
	printf("\n -PEIXE FRITO");
	
	printf("\n Selecione 1 para pizza, 2 para picanha ou 3 para peixe frito");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: printf("\n 1-Pizza, pedido realizado com sucesso!");break;
		case 2: printf("\n 2-Picanha, pedido realizado com sucesso!");break;
		case 3: printf("\n 3-Peixe frito, pedido realizado com sucesso!");break;
		default: printf("\n Invalido"); break;
	}
	return 0;
}
