#include<stdio.h>

int main(){

int n1, n2, i, t, aux;
scanf("%d%d", &n1, &n2);
scanf("%d", &t);
printf("%d  %d  ", n1, n2);
for(i=3; i<=t; i++){

	if(i%2==0){
		aux=n2-n1; 
		printf("%d", aux);
	}else{
		aux=n1+n2;
		printf("%d", aux);
	}
	n1=n2;
	n2=aux;
	printf("  ");
}

return 0;
}

