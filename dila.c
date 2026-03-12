#include<iso646.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
int main(){
    setlocale(LC_ALL,"ptb");
    char r;
char d[51];
float p;
r ='S';
while((r=='S') || (r=='s')){

printf("Informe a descrição do produto: \n");
fflush(stdin);
gets(d);

printf("Informe o preço: \n");
fflush(stdin);
scanf("%f",&p);
printf("O preço de %s é %.2f\n\n",d,p*1.30);
printf("Quer continuar ?\n");
fflush(stdin);
scanf("%c",&r);
}
return 0;
}
