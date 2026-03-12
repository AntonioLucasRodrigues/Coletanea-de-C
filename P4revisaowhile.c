#include<stdio.h>

int main(){
	int j=1, n, x;
	double cont=0, a=0, cv=0;
	printf("repeticoes:");
	scanf("%d", &n);
	printf("num=");
	scanf("%d", &x);
	while(cv<=n){
	cont+=2;
		a=a+ (x/cont);
		cv++;
	}
	printf("%lf", a);
	return 0;
}
