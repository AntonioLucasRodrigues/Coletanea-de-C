#include <stdio.h>
#include <math.h>
 
int main() {
 
    int num, cont, fat=1,nt, i, exp, z=0;

    scanf("%d", &nt);
    scanf("%d", &num);
    for(cont=1; cont<nt; cont++){
        fat=fat*i;
        for(i=1; i<=nt; i++){
        	z+=pow(num,i);
        	z++;
		}
    }
    exp=z/fat;
 printf("%f\n", exp);
    return 0;
}
