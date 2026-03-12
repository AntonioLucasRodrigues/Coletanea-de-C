#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
int main(){

int c, sim=0, nao=0, d=0, seg=30;
char nome[30];

char resp, lua1[50]=" ", lua2[50]=" ";
Sleep(500);
printf("C");
Sleep(80);
printf("r");
Sleep(80);
printf("i");
Sleep(80);
printf("a");
Sleep(80);
printf("d");
Sleep(80);
printf("o");
Sleep(80);
printf("r");
Sleep(80);
printf(":\n");
Sleep(80);
printf("B");
Sleep(80);
printf("r");
Sleep(80);
printf("e");
Sleep(80);
printf("n");
Sleep(80);
printf("o ");
Sleep(80);
printf("A");
Sleep(80);
printf(". ");
Sleep(80);
printf("P");
Sleep(80);
printf("i");
Sleep(80);
printf("n");
Sleep(80);
printf("h");
Sleep(80);
printf("e");
Sleep(80);
printf("i");
Sleep(80);
printf("r");
Sleep(80);
printf("o");
Sleep(80);
printf(", ");
Sleep(80);
printf("d");
Sleep(80);
printf("a ");
Sleep(80);
printf("t");
Sleep(80);
printf("u");
Sleep(80);
printf("r");
Sleep(80);
printf("m");
Sleep(80);
printf("a ");
Sleep(300);
printf("I");
Sleep(300);
printf("1");
Sleep(300);
printf("A");

Sleep(500);
system("cls");
Sleep(500);

strcpy(lua1, "\xDB");
while(d<=100){
printf("\n");
printf("\n\\Carregando...\n");
printf("%s", lua2);
strcat(lua2,lua1);
printf("%d%%",d);

if(d==100){
system("color 0A");
getch();
}
Sleep(300);
system("cls");
d++;
}
system("pause");
system("cls");
system("color 07");
printf("\n\n\nSEJA MUITO BEM-VINDO(A) A ESTE QUIZ!!\n\n\n");
printf("ASSUNTO: LITERATURA");
printf("");
Sleep(700);
printf("\n\n \t\t\t\t}Digite seu nome: \n");
scanf("%s", nome);


Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0A");
printf("F%cCIL",181);
Sleep(2000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){
printf("\n\n \t\t\t\t 1- Quais os três gêneros literários definidos por Arist%coteles?", 136, 136, 162);
printf("\n\n \t\t\t\t (A) Elegia, L%crico, %cpico", 161, 130, 144);
printf("\n\n \t\t\t\t (B) L%crico, %cpico, Dram%ctico", 161, 144, 160);
printf("\n\n \t\t\t\t (C) Epital%cmio, L%crico, Elegia",131, 161);
printf("\n\n \t\t\t\t (D) Folclore, Creonte, Can%c%co", 198, 135);
printf("\n\n \t\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}

if(resp == 'B' || resp == 'b'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}
system("pause");
system("cls");






Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0A");
printf("F%cCIL",181);
Sleep(2000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){
printf("\n\n \t\t\t\t 2- Qual era o nome do pai de %cdipo?", 144);
printf("\n\n \t\t\t\t (A) Tebas");
printf("\n\n \t\t\t\t (B) Laio");
printf("\n\n \t\t\t\t (C) Creonte");
printf("\n\n \t\t\t\t (D) Corinto");
printf("\n\n \t\t}\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");

printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'B' || resp == 'b'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}

system("pause");
system("cls");






Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0A");
printf("F%cCIL",181);
Sleep(2000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){
printf("\n\n \t\t\t\t 3- Qual das alternativas abaixo é uma grande hist%cria grega pertencente ao g%cnero %cpico?", 162, 136, 130);
printf("\n\n \t\t\t\t (A) Odisseia");
printf("\n\n \t\t\t\t (B) O Curupira");
printf("\n\n \t\t\t\t (C) Creonte");
printf("\n\n \t\t\t\t (D) Star Wars");
printf("\n\n \t\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n \aDigite sua resposta: \n");
printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}

system("pause");
system("cls");

Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0E");
printf("MEDIANO");
Sleep(2000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){
printf("\n\n \t\t\t\t 4- Qual das alternativas abaixo n%co se refere a um elemento da linguagem liter%cria?", 198, 160);
printf("\n\n \t\t\t\t (A) Ficcionalidade");
printf("\n\n \t\t\t\t (B) Subjetividade");
printf("\n\n \t\t\t\t (C) Objetividade;");
printf("\n\n \t\t\t\t (D) Ludicidade");
printf("\n\n \t\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");
printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'C' || resp == 'c'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}






Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0E");
printf("MEDIANO");
Sleep(200);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){

printf("\n\n \t\t\t\t 5- Arist%cteles afirmava que o g%cnero dram%ctico era marcado pela...?", 162, 136, 160);
printf("\n\n \t\t\t\t (A) Palavra Afirmada");
printf("\n\n \t\t\t\t (B) Palavra Narrada");
printf("\n\n \t\t\t\t (C) Palavra Roteirizada");
printf("\n\n \t\t\t\t (D) Palavra Representada");
printf("\n\n \t\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");
printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'D' || resp == 'd'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}

Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(400);
printf("%d\t", sim);
Sleep(400);
printf("ERRADAS:");
Sleep(400);
printf("%d\t",nao);
Sleep(400);
system("pause");
Sleep(400);
printf("\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("color 0E");
printf("MEDIANO");
Sleep(2000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){

printf("\n\n \t\t\t\t 6- %cdipo foi uma obra escrita por...?", 144 );
printf("\n\n \t\t\t\t (A) S%cfocles", 162);
printf("\n\n \t\t\t\t (B) Homero");
printf("\n\n \t\t\t\t (C) Dante Alighieri");
printf("\n\n \t\t\t\t (D) Xenofonte");
printf("\n\n \t\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");
printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}

Sleep(1000);
printf("\n\n\n \a\t\t\t\tACERTOS:");
Sleep(100);
printf("%d\t", sim);
Sleep(700);
printf("ERRADAS:");
Sleep(700);
printf("%d\t",nao);
Sleep(700);
system("pause");
Sleep(1000);

printf("\n \a\t\t\t\t N%cVEL DA PERGUNTA:");
system("cls");
printf("\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
system("cls");
printf("\n\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("cls");
Sleep(400);
printf("\n\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("cls");
Sleep(400);
printf("\n\n\n \a\t\t\t\t N%cVEL DA PERGUNTA:", 161);
Sleep(400);
system("cls");
Sleep(400);
printf("\aD");
Sleep(400);
printf("\aI");
Sleep(400);
printf("\aF");
Sleep(400);
printf("%c",214);
Sleep(400);
printf("C");
Sleep(400);
printf("I");
Sleep(400);
printf("L");
Sleep(1000);
system("color 0C");
Sleep(3000);

seg = 30;
system("cls");
system("color 07");
while(seg > -1){

printf("\n\n \a\t\t\t\t 7- Os dois poemas do g%cnero caracterizados por serem buc%clicos e pastoris s%co:",136,162,198);
printf("\n\n \a\t\t\t\t (A) Hino e Elegia");
printf("\n\n \a\t\t\t\t (B) Acr%cstico e Soneto", 162);
printf("\n\n \a\t\t\t\t (C) Id%clio e %cloga",161, 144);
printf("\n\n \a\t\t\t\t (D) Ode e Epital%cmio");
printf("\n\n \a\a\t\t\t\t\t\t\t\t\tNome: %s", nome);
printf("\n\n Digite sua resposta: \n");
printf("\n\nTempo: 0:%d\n", seg);
Sleep(1000);
seg--;
system("cls");
if(_kbhit()){
resp = getch();
resp == toupper(resp);
break;
}
}
resp == toupper(resp);
if(resp == 'A' || resp == 'a'){
printf("\n\n\t\t\t\t\t\t\t Resposta CORRETA!");
while(c < 6){
system("color 0A");
Sleep(500);
system("color 07");

c++;

}
c = 0;
sim++;
}else{
printf("\n\n\t\t\t\t\t\t\t Resposta ERRADA!");
while(c<6){
system("color 0C");
Sleep(500);
system("color 07");

c++;
}
c = 0;
nao++;

}
Sleep(1000);
system("cls");
Sleep(100);
printf("\n\n\n\nPARAB%cNS, %s, VOC%c TERMINOU O QUIZ!!!!!",144, nome,210);
Sleep(100);
system("color 04");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 02");
Sleep(100);
system("color 03");
Sleep(100);
system("color 09");
Sleep(100);
system("color 05");
Sleep(100);
system("color 09");
Sleep(100);
system("color 03");
Sleep(100);
system("color 02");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 04");
Sleep(100);
system("color 07");
Sleep(100);
system("color 04");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 02");
Sleep(100);
system("color 03");
Sleep(100);
system("color 09");
Sleep(100);
system("color 05");
Sleep(100);
system("color 09");
Sleep(100);
system("color 03");
Sleep(100);
system("color 02");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 04");
Sleep(100);
system("color 07");
Sleep(100);
system("color 04");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 02");
Sleep(100);
system("color 03");
Sleep(100);
system("color 09");
Sleep(100);
system("color 05");
Sleep(100);
system("color 09");
Sleep(100);
system("color 03");
Sleep(100);
system("color 02");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 04");
Sleep(100);
system("color 07");
Sleep(100);
system("color 04");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 02");
Sleep(100);
system("color 03");
Sleep(100);
system("color 09");
Sleep(100);
system("color 05");
Sleep(100);
system("color 09");
Sleep(100);
system("color 03");
Sleep(100);
system("color 02");
Sleep(100);
system("color 0E");
Sleep(100);
system("color 0C");
Sleep(100);
system("color 04");
Sleep(100);
system("color 07");
Sleep(1000);
system("cls");
Sleep(1000);
system("pause");

return 0;
}
