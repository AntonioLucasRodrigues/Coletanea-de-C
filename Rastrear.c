#include<stdio.h>
#define t 8
int main(){
int vet[t]={71, 56, 63, 41, 17, 29, 45, 32}, vetr[t], i, j, aux;

for(i=0; i<t; i++){
	printf("%d ", vet[i]);
	
}
for(i=0; i<t; i++){
	vetr[i]=vet[i];
}
for(i=0; i<t; i++){
	for(j=i+1; j<t; j++){
		if(vetr[i]>vetr[j]){
			aux=vetr[i];
			vetr[i]=vetr[j];
			vetr[j]=aux;
			printf("%d ", vetr[j]);
			
		}
		printf("\n");
		}
}
printf("\n");
for(i=0; i<t; i++){
	printf("%d", vetr[i]);
}

return 0;
}

