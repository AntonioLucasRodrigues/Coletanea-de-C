#include<stdio.h>

int main(){
	int vet[3], i;
	float media;
	
	for(i=0; i<3; i++){
		scanf("%d", vet[i]);
		vet[i]++;
	}
	media=vet[i]/10;
	printf("%d ", media);
	return 0;
}
