#include <stdio.h>
 
int main() {
 
    int n, i, g, som=0, c=0, r=0, s=0;
    float pc, ps, pr;
    char cha;
    scanf("%d", &n);
    for(i=0;i<n; i++){
        scanf("%d", &g);
        scanf("%c", &cha);
        fflush(stdin);
        som=som+g;
        if(cha=='C'){
            c=c+g;
        }else if(cha=='S'){
            s=s+g;
        }else if(cha=='R'){
            r=r+g;
        }
    }
    pc=c*100/som;
    pr=r*100/som;
    ps=s*100/som;
    
    printf("Total: %d cobaias\n", som);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %\n",pc);
    printf("Percentual de ratos: %.2f %\n",pr);
    printf("Percentual de sapos: %.2f %\n",ps);
 
    return 0;
}
