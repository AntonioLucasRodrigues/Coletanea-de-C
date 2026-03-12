#include <stdio.h>
 
int main() {
 
    int x, i, n=0;
    do{
        scanf("%d", &x);
        if(x==0){
        break;
        }else if(x%2==0){
            for(i=x; i<=x+8; i+=2){
                n+=i;
            }
            printf("%d\n", n);
        }else{
            x=x+1;
            for(i=x; i<=x+8; i+=2){
                n+=i;
            }
            printf("%d\n", n);
            
        }
        n=0;
    }while(x!=0);
 
    return 0;
}
