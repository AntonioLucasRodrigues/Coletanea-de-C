//FMM
//Antonio Lucas Rodrigues I1A
//09/04/22    16:18h

//2)Faça um programa em C que leia o peso e a altura de uma pessoa,faça o cálculo do IMC (Índice de Massa
//Corporal) e informe se ele está abaixo do peso, no peso ideal, acima do peso ou seu grau de obesidade.

#include<stdio.h>
#include<conio.h>

int main(){
	float alt, peso, Imc;
	printf("\n informe sua altura: ");
	scanf("%f", &alt);
	printf("\n informe seu peso: ");
	scanf("%f", &peso);
	Imc= peso/(alt*alt);
	if(Imc<=18.5){
		printf("\n Peso ideal");
	}else if(18.5<Imc && Imc<25){
		printf("\n Peso normal");
	}else if(25<=Imc && Imc<30){
	
	printf("\n Sobrepeso");
}else if(30<=Imc&& Imc<35){
	printf("\n Obesidade grau 1");
}else if(35<=Imc && Imc<40){
	
	printf("\n Obesidade grau 2");
}else if(Imc>=40){
	printf("\n Obesidade grau 3");
}else{
	printf("\n Invalido");
}
printf("\n Seu Imc %c: %.2f", 130, Imc);
	getch();
	return 0;
	
}
