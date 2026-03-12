#include <stdio.h>
 
int main() {
 
    double n=0, num, media=0;
    do{
       scanf("%lf", &num);
       if(num<0){
       break;
	   }else{
	  
	   media+=num;
       n++; 
	    }
    }while(num>0);
    printf("%.2lf", media/n);
    return 0;
}
