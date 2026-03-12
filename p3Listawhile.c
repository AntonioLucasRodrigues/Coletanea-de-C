#include<stdio.h>

int main(){
	int  cont=0,con=0;
	float s=0, n ;
	scanf("%f", &n);
	while(con<=n){
		
		if(cont%2==0){
			s=s+(4.0/cont);
				con++;
		cont+=2;
		}
		else{
			s= s-(4.0/cont);
			con++;
		cont+=2;
		}
		
	    
		}
		printf("%.2f", s);
		return 0;
	}

