#include<stdio.h>

int main(){
	int i;
	int n, x=1, a=1, b=0, cont=1;
	printf("PROGRAMA MATEMATICA LEGAL \n");
	do{
		printf("[1] Calcular fatorial\n");
		printf("[2] Calcular potencia\n");
		printf("[3] Calcular fibonacci\n");
		printf("[0] Encerrar programa\n");
		scanf("%d", &i);
		}while(i!=0 || i<3);
		if(i==3){
			
		x=a+b;
				b=a;
				a=x;
				cont++;
				printf("%d\n", x);
		}
		
	
}
