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
	
	switch(num){
		case 1: printf("\n JANEIRO");break;
		case 2: printf("\n FEVEREIRO");break;
		case 3: printf("\n MARÇO");break;
		case 4: printf("\n ABRIL");break;
		case 5: printf("\n MAIO");break;
		case 6: printf("\n JUNHO");break;
		case 7: printf("\n JULHO");break;
		case 8: printf("\n AGOSTO");break;
		case 9: printf("\n SETEMBRO");break;
		case 10: printf("\n OUTUBRO");break;
		case 11: printf("\n NOVEMBRO");break;
		case 12: printf("\n DEZEMBRO");break;
		default: printf("\nInvalido");break;
	}
return 0;
}
