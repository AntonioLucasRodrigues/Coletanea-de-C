#include <stdio.h>
 
int main() {
 
   int n, num, i, j, d=0;
   scanf("%d", &n);
   for(i=0; i<n; i++){
       scanf("%d", &num);
       
       for(j=1; j<=num; j++){
           if(num%j==0){
               d++;
           }else{
           	continue;
		   }
       }
       if(d==2){
           printf("%d eh primo\n", num);
       }else{
           printf("%d nao eh primo\n", num);
       } 
	   d=0;
   }

    return 0;
}
