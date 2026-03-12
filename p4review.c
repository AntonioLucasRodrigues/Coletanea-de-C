#include<stdio.h>

int main(){
	int i, n, x,  xx;
	float serie,cont=0;
	printf("Quantos numeros serao lidos:");
	scanf("%d", &n);
	
		
	for(x=0; x<n; x++){
		scanf("%d", &xx);
		cont+=2;
		serie+= xx/cont;
	}

	printf("\nSerie=%.2f", serie);
	return 0;
}
