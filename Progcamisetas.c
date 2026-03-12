#include<stdio.h>
#include<conio.h>
int main(){
	system("color 0C");
	float p, m, g, total;
	printf("Quantas camisetas pequenas foram vendidas");
	scanf("%f", &p);
	printf("Quantas camisetas medias foram vendidas\n");
	scanf("%f", &m);
	printf("Quantas camisetas grandes foram vendidas\n");
	scanf("%f", &g);
	
	total= (p*10)+(m*12)+(g*15);
	printf("\n Total arrecadado %.f reais", total);
	getch();
	return 0;
}
