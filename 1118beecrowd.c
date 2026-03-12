#include <stdio.h>
 
int main() {
 
   double n, media, s=0,c=0, sn, m=0;
   while(m!=2){
       scanf("%lf",&n);
       if(n<0||n>10){
           printf("nota invalida\n");
       }
       else{
           m++;
            s+=n;
       printf("media = %.2lf", s/2);
	   
       } 
	   m=0;
       while(sn!=2){
	   
        
       
       printf("novo calculo (1-sim 2-nao)");
       scanf("%lf", &sn);
       
   }
   }
    return 0;
}
