#include <stdio.h>
 
int main() {
 
    int n, num, i, x, y=0, z;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num);
        for(x=1; x<num;x++){
        	if(num%x==0){
            y+=x;
		}
        }if(y==num){
                printf("%d eh perfeito\n", num);
            }else{
                printf("%d nao eh perfeito\n", num);
            }
            y=0;
    }
 
    return 0;
}
