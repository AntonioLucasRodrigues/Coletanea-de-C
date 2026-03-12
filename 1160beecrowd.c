#include <stdio.h>
 
int main() {
 
    int n, pa, pb, tempo=0, i;
    double ga, gb;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d%d", &pa, &pb);
        scanf("%lf%lf", &ga, &gb);
        while(pa<=pb&&tempo<101){
            pa=(int)pa+(pa*ga/100);
            pb=(int)pb+(pb*gb/100);
            tempo++;
        }
        if(tempo>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos\n", tempo);
        }
        tempo=0;
    }
    
    return 0;
}

