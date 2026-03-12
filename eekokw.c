#include <stdio.h>
 
int main() {
 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a<(b+c))&& (b<(a+c))&& (c<(b+a))){
        printf("Invalido\n");
    }else if(a!=b && b!=c && c!=a){
        printf("Valido-Escaleno\n");
    }else if(a == b || b == c || a == c){
        printf("Valido-Isosceles\n");
    }else{
        printf("Valido-Equilatero\n");
    }
 
 if((a*a)==(b*b)+ (c*c)||(b*b)==(a*a)+ (c*c)||(c*c)==(a*a)+ (b*b)){
     
     printf("Retangulo: S\n");
 }else
 printf("Retangulo: N\n");
    return 0;
}
