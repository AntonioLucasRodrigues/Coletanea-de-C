#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"ptb");
	
char resp;
int c, d, certo=0, errou=0, tempo=0;
int e=0;
char lua1[50]="", lua2[50]="";
  
system("color 0D");

printf("\t\t\t   _  _  _  _         _            _          _  _  _           _  _  _  _  _\n");   
printf("\t\t\t _(_)(_)(_)(_)_      (_)          (_)        (_)(_)(_)         (_)(_)(_)(_)(_)\n");   
printf("\t\t\t(_)          (_)     (_)          (_)           (_)                      _(_)\n");  
printf("\t\t\t(_)          (_)     (_)          (_)           (_)                    _(_)\n");      
printf("\t\t\t(_)     _    (_)     (_)          (_)           (_)                  _(_)\n");       
printf("\t\t\t(_)    (_) _ (_)     (_)          (_)           (_)                _(_)\n");         
printf("\t\t\t(_)_  _  _(_) _      (_)_  _  _  _(_)         _ (_) _           _ (_) _  _  _\n");  
printf("\t\t\t  (_)(_)(_)  (_)       (_)(_)(_)(_)          (_)(_)(_)         (_)(_)(_)(_)(_)\n");  

system("pause");
system("cls");
 
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
strcpy(lua1,".");
while(e<=100){
	
	printf("\n");
	printf("\nLoading...\t\n");

	printf("%s", lua2);
	strcat(lua2,lua1);
	printf("%d%%",e);
	printf("\n\nPRESS ANY BUTTON TO START\n");
	if(e==66){
		Sleep(2000);
	}
	if(e==99){
		system("color 0A");
		getch();
		
	}
	system("cls");
	e+=3;
	
}

system("cls");


printf("\t\tAs questões a seguir são sobre conteúdos gerais de HISTÓRIA\n\n\t\tVoce tem 30 segundos para responder cada questão \n\n\t\tBOA SORTE:)\n");
system("pause");
system("cls");

tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 1- Quem proclamou a Independencia da república do Brasil?");
printf("\n\n  (A) Professor Sérgio Roberto\n");
printf("\n\n  (B) Dom Pedro II\n");
printf("\n\n  (C) Dom Pedro I\n");
printf("\n\n  (D) Pero Vaz de Caminha\n");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'c' || resp == 'C'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}
system("pause");
system("cls");



tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 2- Em 1960 foi inaugurada a nova capital do Brasil(Brasília). O então presidente da República era:");
printf("\n\n  (A) Castelo Branco");
printf("\n\n  (B) Juscelino Kubitschek");
printf("\n\n  (C) Jânio Quadros");
printf("\n\n  (D) Jair Bolsonaro");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'b' || resp == 'B'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}
system("pause");
system("cls");


tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 3- Quem foi o primeiro presidente dos Estados Unidos:");
printf("\n\n  (A) Abraham Lincoln");
printf("\n\n  (B) Sérgio Roberto");
printf("\n\n  (C) Benjamin Franklin");
printf("\n\n  (D) George Washington");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'd' || resp == 'D'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}
system("pause");
system("cls");



tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 4- Dentre os fatores que conduziram à Primeira Guerra Mundial (1914-1918),destacamos o(a):");
printf("\n\n  (A) Nacionalismo eslavo aliado à desagregação do Império Turco.\n");
printf("\n\n  (B) Acordo militar anglo-germânico visando à partilha da África.\n");
printf("\n\n  (C) Oposição do Imperador Francisco Ferdinando à admissão da Sérvia no Império Austro-Húngaro.\n");
printf("\n\n  (D) Descontentamento da França frente à ocupação no Marrocos.\n");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}
system("pause");
system("cls");



tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 5- A 2a Guerra Mundial durou de____ até_____. Marque a alternativa que preenche os espaços em branco");
printf("\n\n  (A) 1988-2000\n");
printf("\n\n  (B) 1939-1945\n");
printf("\n\n  (C) 1504-1572\n");
printf("\n\n  (D) 1918-1926\n");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}
system("pause");
system("cls");


tempo = 30;
system("cls");
system("color 07");
while(tempo >= 0){
printf("\n\n 6- Para o Paraguai, portanto, essa foi uma guerra pela sobrevivência. De todo modo, uma guerra contra dois gigantes estava fadada a ser um teste debilitante e severo para uma economia de base tão estreita. Lopez precisava de uma vitória rápida e, se não conseguisse vencer rapidamente, provavelmente não venceria nunca.\nA Guerra do Paraguai teve consequências políticas importantes para o Brasil, pois:");
printf("\n\n  (A) representou a afirmação do Exército Brasileiro como um ator político de primeira ordem\n");
printf("\n\n  (B) solucionou a crise financeira, em razão das indenizações recebidas\n");
printf("\n\n  (C) concretizou a emancipação dos escravos negros.\n");
printf("\n\n  (D) confirmou a conquista da hegemonia brasileira sobre a Bacia Platina");

printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}


tempo = 30;
system("cls");
system("color 07");

printf("\n\n 7- Com relação à vida social e política na Grécia clássica, assinale a alternativa correta.\n");
printf("\n\n  (A) A democracia grega foi instalada no século VI a.C por Clístenes, colocando fim a um governo tirânico.\n");
printf("\n\n  (B) A decadencia da pólis grega no período arcaico entre os séculos VIII a.C e VI a.C e o surgimento de Atenas permitiram o florescimento cultural nas cidades antigas\n");
printf("\n\n  (C) concretizou a emancipação dos escravos caldeus.\n");
printf("\n\n  (D) Os habitantes tinham direitos políticos e eram livres, com excessão de mulheres e escravos");
print("\n\n Alternativa: \n");
scanf("%c", &resp);
c=0;
printf("\n\nTempo: %d segundos\n", tempo);
Sleep(1000);
tempo--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
}

if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
printf("\n\t\t :) MUITO BEM!!!!!\n");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
certo++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
printf("\n\t\t\t\t\t\t\tMAIS ATENÇÃO NA PRÓXIMA ;)\n\n");

while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
errou++;

}



system("pause");

system("cls");


printf("\t\t|             Pontuação Total             |\n");
printf("\t\t|                     |                   |\n");
printf("\t\t|Acertos: %d          |        WOW        |\n", certo);
printf("\t\t|                     |                   |\n");
printf("\t\t|Erros: %d            |         -_-       |\n", errou);

printf("OBRIGADO PELA PARTICIPAÇÃO");






return 0;


}
