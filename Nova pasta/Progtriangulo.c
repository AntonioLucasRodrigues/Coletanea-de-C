#include<stdio.h>
#include<conio.h>
int main() {
    float x, y, z;

    printf("Digite tres valores: ");
    scanf("%f%f%f", &x, &y, &z);

    if(x + y > z && x + z > y && y + z > x){
        printf("Os 3 lados formam um triangulo\n");
        if(x == y && x == z)
            printf("Equilatero\n");
        else 
		    if(x == y || x == z || y == z)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os  lados nao formam um trinagulo!\n");
        getch();
        return 0;
}
