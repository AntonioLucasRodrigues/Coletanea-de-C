#include <stdio.h>
 
int main() {
 
    int a, b, i=1, j;
    scanf("%d%d", &a, &b);
    
        for(j=1; j<=b; j++){
        	
        	if(i!=a){
			i++;
            printf("%d ", j);
			}else{
				printf("%d\n", j);
				i=1;
			}
        }

 
    return 0;
}
