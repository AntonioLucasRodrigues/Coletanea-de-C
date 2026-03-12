#include<stdio.h>

int main(){
	int n, x=1, a=1, b=0, cont=1;
	scanf("%d", &n);
		if(n>0){
			while(cont<=n){
				printf("%d\n", x);
				x=a+b;
				b=a;
				a=x;
				cont++;
			}
		}
		return 0;
	}

