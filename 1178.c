#include <stdio.h>
 
int main() {
 
    double x, i, n[100];
    
    scanf("%lf", &x);
    
    for(i=0; i<100; i++){
        printf("N[%.lf] = %.4lf\n",i, x);
        x/=2;
    }
 
    return 0;
}
