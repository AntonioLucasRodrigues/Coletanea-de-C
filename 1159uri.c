#include <stdio.h>
 
int main() {
 
    int i, n, s=1, t=1, u=0;
    scanf("%d", &n);
    printf("%d ", u);
    for(i=1; i<n-1; i++){
	printf("%d ", s);
    
        s=t+u;
        u=t;
        t=s;
        if(i==n-2){
        	printf("%d", s); 
        }
		
    }
 printf("\n");
    return 0;
}
