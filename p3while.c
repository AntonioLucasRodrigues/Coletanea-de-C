#include<stdio.h>
int main(){
	double n,i=1,j=1,s=0;
	int cont=2;
	scanf("%lf",&n);
	while(i<=n){
		if(cont%2==0){
			s=s+(4.0/j);
			cont++;
			j+=2;
		}else{
			s=s-(4/j);
			cont++;
			j+=2;
		}
		i++;
	}
	printf("%lf\n",s);
	return 0;
}
