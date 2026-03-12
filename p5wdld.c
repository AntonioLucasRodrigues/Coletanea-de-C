#include<stdio.h>
#include<math.h>

int main(){
	int nt  , expo=0; 
	float s, i, r;
	scanf("%d", &nt);
	scanf("%f", &r);
	for(i=1; i<nt; i++){
		expo=pow(r,i);
		
		s=s+(expo/i);
		
	}
	
	printf("%f", s);
	return 0;
}
