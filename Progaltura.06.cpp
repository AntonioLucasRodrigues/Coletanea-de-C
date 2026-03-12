#include<stdio.h>

int main(){
	float sam=1.4, say=1.1;
	int cont=0;
	
	while(say<sam){
		sam=sam+0.02;
		say=say+0.03;
		cont++;
		
	}
	printf("tempo %d", cont);
}
