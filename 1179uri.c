#include <stdio.h>
 
int main() {
 
    int par[5], impar[5], x, i, j, c=0, v=0, k;
    for(i=0; i<15; i++){
        scanf("%d", &x);
        if(x%2==0){
            
            par[c]=x;
            c++;
            if(c==5){
            	c=0;
			
            for(j=0; j<5;j++){
               printf("par[%d] = %d\n", j, par[j]);
            }}
        }else{
           
            impar[v]=x;
            v++;
            if(v==5){
            	v=0;
			
            for(k=0; k<5;k++){
               printf("impar[%d] = %d\n", k, impar[k]);
            }}
        }
    }
    for (i = 0; i < c; i++){

    printf("impar[%d] = %d\n", i, impar[i]);

  }

  for ( i = 0; i < v; i++){

    printf("par[%d] = %d\n", i, par[i]);

  }
 
    return 0;
}
