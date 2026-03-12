//FMM
//Lógica e técnica de programação  
//Antonio Lucas de Melo Barbosa Mendes Rodrigues  RA:227113
// dia: 01/04/22    20:58h
//3)Faça um algoritmo que calcule e mostre a tabuada (de 1 a 10) de dividir de um número fornecido pelo usuário:
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"ptb");
	int num, a, b, c, d, e, f, g, h, i, j;
	printf("\nDigite um número inteiro");
	scanf("%d", &num);
	system("color 3");
	printf(" TABUÁDA DE DIVISÃO de 1 a 10");
	
	(num*1)/num == a;
	(num*2)/num==b;
	(num*3)/num ==c;
	(num*4)/num ==d;
	(num*5)/num ==e;
	(num*6)/num ==f;
	(num*7)/num ==g;
	(num*8)/num ==h;
	(num*9)/num ==i;
	(num*10)/num ==j;
	
	printf("número escolhido dividido pelo próprio= 1	", a);
	system("pause");
	printf("número escolhido vezes 2 dividido pelo próprio= 2	", b);
	system("pause");
	printf("número escolhido vezes 3 dividido pelo próprio= 3	", c);
	system("pause");
	printf("número escolhido vezes 4 dividido pelo próprio= 4  ", d);
	system("pause");
	printf("número escolhido vezes 5 dividido pelo próprio= 5  ", e);
	system("pause");
	printf("número escolhido vezes 6 dividido pelo próprio= 6	", f);
	system("pause");
	printf("número escolhido vezes 7 dividido pelo próprio= 7	", g);
	system("pause");
	printf("número escolhido vezes 8 dividido pelo próprio= 8	", h);
	system("pause");
	printf("número escolhido vezes 9 dividido pelo próprio= 9	", i);
	system("pause");
	printf("número escolhido vezes 10 dividido pelo próprio= 10	", j);
	system("pause");
	
	return 0;
}
