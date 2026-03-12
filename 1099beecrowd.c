#include <stdio.h>
 
int main() {
    int n, x, y,g, i, s=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d", &x, &y);
        if(x<y){
            for(i=x+1; i<y; i++){
                if(i%2==1){
                    s=s+i;
                }
            }
            printf("%d\n", s);
            
        }
        else if(x==y){
        	printf("0\n");
		}
  
    else if(x>y){
            for(i=y+1; i<x; i++){
                if(i%2==1){
                    s=s+i;
                }
            }
			printf("%d\n", s);
        }
		s=0;
      }
    
    
 
    return 0;
}
