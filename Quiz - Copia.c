#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
char resp;
int c, certo=0, errou=0;
system("color 1");

 
    printf("\n\t\t-----------------------------------------------------------------------------------\n");
    printf("\t\t|                                                                                 |\n");
    printf("\t\t|                               BEM VINDO                                         |\n");
    printf("\t\t|                                  ao                                             |\n");
    printf("\t\t|                                ¿QUIZ?                                           |\n");
    printf("\t\t|                                                                                 |\n");
    printf("\t\t|made by: Antonio                                                                 |\n");
    printf("\t\t-----------------------------------------------------------------------------------\n");
 
 

system("pause");

system("cls");

printf("\t\tAs questões a seguir são sobre conteúdos gerais de HISTÓRIA\n\n\t\tVoce tem 30 segundos para responder cada questão \n\n\t\tBOA SORTE:)\n");
system("pause");
system("cls");
printf("\n \t\t\t\t ACERTOS: %d \t ERROS: %d", certo, errou);

printf("\n\n 1- Quem proclamou a Independencia da república do Brasil?");
printf("\n\n  (A) Professor Sérgio Roberto\n");
printf("\n\n  (B) Dom Pedro II\n");
printf("\n\n  (C) Dom Pedro I\n");
printf("\n\n  (D) Pero Vaz de Caminha\n");
printf("\n\n Alternativa : \n");
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'C'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	certo++;
	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");
}

system("pause");
system("cls");
system("cls");
printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);

printf("\n\n 2- Em 1960 foi inaugurada a nova capital do Brasil(Brasília). O então presidente da República era:");
printf("\n\n  (A) Castelo Branco");
printf("\n\n  (B) Juscelino Kubitschek");
printf("\n\n  (C) Jânio Quadros");
printf("\n\n  (D) Jair Bolsonaro");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'B'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	certo++;
	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");
}
	system("pause");

system("cls");

printf("\n \t\t\t\t CERTO: %d \t ERROU: %d", certo, errou);

printf("\n\n 3- Quem foi o primeiro presidente dos Estados Unidos:");
printf("\n\n  (A) Abraham Lincoln");
printf("\n\n  (B) Sérgio Roberto");
printf("\n\n  (C) Benjamin Franklin");
printf("\n\n  (D) George Washington");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'D'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	certo++;
	system("cls");
	system("color D");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color B");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");
	system("pause");

system("cls");

printf("\n\n 4- Dentre os fatores que conduziram à Primeira Guerra Mundial (1914-1918),destacamos o(a):");
printf("\n\n  (A) Nacionalismo eslavo aliado à desagregação do Império Turco.\n");
printf("\n\n  (B) Acordo militar anglo-germânico visando à partilha da África.\n");
printf("\n\n  (C) Oposição do Imperador Francisco Ferdinando à admissão da Sérvia no Império Austro-Húngaro.\n");
printf("\n\n  (D) Descontentamento da França frente à ocupação no Marrocos.\n");
printf("\n\n Alternativa: \n");
fflush(stdin);
scanf("%c", &resp);
c=0;
if(toupper(resp)== 'A'){
	printf("\n\nResposta Correta!!!");
	certo++;
	while(c<6){
		system("color A7");
		Sleep(500);
		system("color 07");
		c++;
	}
	certo++;
	system("cls");
	system("color E");
	printf("\n\t\t :) MUITO BEM!!!!!\n");
}else{
	printf("\n\n RESPOSTA ERRADA!!!");
	while(c<6){
		system("color C7");
		Sleep(500);
		system("color 07");
		c++;
	}errou++;
	system("cls");
	system("color 2");
	printf("\n\t\tMAIS ATENÇÃO NA PRÓXIMA;)\n\n");


system("pause");

system("cls");

return 0;
}

}
}

