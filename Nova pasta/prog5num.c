
#include<stdio.h>
int main(){
int a, b, c, d, e;
printf("\n Informe 5 valores: ");
scanf ("%d%dd%d%d", &a, &b , &c, &d, &e);

if(a>b && a>c && a>d && a>e){

printf("\n O Maior: %d",a);}
else if(b>a && b>c && b>d && b>e){

printf("\n O Maior: %d", b);
}
else if(c>a && c>b && c>d && c>e){

printf("\n O Maior: %d", c);
}
else if (d>a && d>b && d>c && d>e){

printf("\n O Maior: %d", d);
}
else if(e>a && e>b && e>c && e>d){

printf ("\n O Maior: %d", e);
}else if (b>a && c>a && d>a && e>a){

printf ("\n O Menor: %d", a);
}else if(a>b && c>b && d>b && e>b){

printf ("\n O Menor: %d", b);
}
else if (a>c && b>c && d>c && e>c){

printf("\n O Menor: %d", c);
}else if (a>d && b>d && c>d && e>d){

printf("\n O Menor: %d", d);
}else if (a>e && b>e && c>e && d>e){

printf("\n O Menor: %d", e);
}else if(a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e )

printf("\n Valores invalidos encontrados, selecione outros valores");

system("pause");
return 0;
}
