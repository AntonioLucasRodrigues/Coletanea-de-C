#include <stdio.h>

 
int main() {
 
 int n[20], i, cont, c=0;
 for(i=0;i<20; i++){
     scanf("%d", &n[i]);
     cont++;
 }
 for(i=19; i>=0; i--){
     
     printf("N[%d] = %d\n",c, n[i]);
     c++;
 }

    return 0;
}
