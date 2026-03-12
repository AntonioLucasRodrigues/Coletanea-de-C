#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<conio.c>

    struct contatos{
    	
    	char nome[50];
    	char telefone[30];
    	
	}incluir;
	


int main(){
	
	int a=5, i;
	do{
		
		textbackground(0);
		textcolor(10);printf("\n\n                                           ***CENTRAL DE CONTATOS***\n\n\n");
		printf("1-Adicionar Novo Contato   \n ");
		printf("2-Proucurar Contato existente\n\n\n");
		printf("3-Remover contato\n\n\n");
		printf("4-Alterar Contato\n\n\n");
		printf("5-Mostar lista de contatos\n\n\n\n");
		printf("6-Sair\n\n\n\n");
		gotoxy(47,12);printf("Digite uma nova Opcao: \n\n\n");
		gotoxy(49,10);textcolor(8);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(48,11);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB");
		gotoxy(48,12);textcolor(8);printf("\xDB\xDB\t\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\t\xDB\xDB");
		gotoxy(48,13);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB");
		gotoxy(48,14);textcolor(8);printf("\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB");
		gotoxy(48,15);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,16);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,17);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,18);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,19);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,20);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,21);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,22);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,23);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,24);textcolor(8);printf("\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB");
		gotoxy(48,25);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB\t  \xDB\xDB\xDB\xDB\xDB\t        \xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB\t\t\t\xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t        \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");

        gotoxy(53,15);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,16);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,17);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,18);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,19);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,20);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,21);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,22);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,23);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        
        gotoxy(53,15);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(55,16);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(58,17);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(60,18);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(62,19);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(64,20);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(66,21);textcolor(3);printf("\xDB\xDB\xDB\xDB");
        gotoxy(68,22);textcolor(3);printf("\xDB\xDB");
        
        gotoxy(50,11);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(50,12);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(59,12);textcolor(15);printf("\xDB\xDB");
        gotoxy(66,12);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(50,13);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,14);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(70,14);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(50,15);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,15);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,16);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,16);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,17);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,17);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,18);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,18);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,19);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,19);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,20);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,20);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,21);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,21);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,22);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,22);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,23);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,23);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,24);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(70,24);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(50,25);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
		gotoxy(50,27);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,27);textcolor(8);printf("\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
		gotoxy(50,27);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		
		
		textcolor(11);gotoxy(70,6);scanf("%d",&a);
        system("cls");
        while(a<=0 || a>6){
        	textcolor(10);printf("\n\n                                           ***CENTRAL DE CONTATOS***\n\n\n");
		printf("1-Adicionar Novo Contato    ");
		printf("2-Proucurar Contato existente\n\n\n");
		printf("3-Remover contato\n\n\n");
		printf("4-Alterar Contato\n\n\n");
		printf("5-Mostar lista de contatos\n\n\n\n");
		printf("6-Sair\n\n\n\n");
		
		gotoxy(47,12);printf("Digite uma nova Opcao: \n\n\n");
		gotoxy(49,10);textcolor(8);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(48,11);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB");
		gotoxy(48,12);textcolor(8);printf("\xDB\xDB\t\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\t\xDB\xDB");
		gotoxy(48,13);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB");
		gotoxy(48,14);textcolor(8);printf("\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB");
		gotoxy(48,15);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,16);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,17);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,18);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,19);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,20);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,21);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,22);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,23);textcolor(8);printf("\xDB\xDB  \xDB                 \xDB  \xDB\xDB");
		gotoxy(48,24);textcolor(8);printf("\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB");
		gotoxy(48,25);textcolor(8);printf("\xDB\xDB\t\t\t\xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB\t  \xDB\xDB\xDB\xDB\xDB\t        \xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB\t\t\t\xDB\xDB\n");
		gotoxy(48,26);textcolor(8);printf("\t\t\t\t\t        \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");

        gotoxy(53,15);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,16);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,17);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,18);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,19);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,20);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,21);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,22);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(53,23);textcolor(11);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        
        gotoxy(53,15);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(55,16);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(58,17);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(60,18);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(62,19);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(64,20);textcolor(3);printf("\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(66,21);textcolor(3);printf("\xDB\xDB\xDB\xDB");
        gotoxy(68,22);textcolor(3);printf("\xDB\xDB");
        
        gotoxy(50,11);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(50,12);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(59,12);textcolor(15);printf("\xDB\xDB");
        gotoxy(66,12);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
        gotoxy(50,13);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,14);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(70,14);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(50,15);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,15);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,16);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,16);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,17);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,17);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,18);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,18);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,19);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,19);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,20);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,20);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,21);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,21);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,22);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,22);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,23);textcolor(15);printf("\xDB\xDB");
		gotoxy(71,23);textcolor(15);printf("\xDB\xDB");
		gotoxy(50,24);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(70,24);textcolor(15);printf("\xDB\xDB\xDB");
		gotoxy(50,25);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
		gotoxy(50,27);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,27);textcolor(8);printf("\xDB\xDB\xDB\xDB\xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
		gotoxy(50,27);textcolor(8);printf("\t\t\t\t\t       \xDB\xDB");
		gotoxy(50,27);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		
		gotoxy(57,16);textcolor(4);printf("\xDB\xDB");
		gotoxy(64,16);textcolor(4);printf("\xDB\xDB");
		gotoxy(58,17);textcolor(4);printf("\xDB\xDB");
		gotoxy(63,17);textcolor(4);printf("\xDB\xDB");
		gotoxy(59,18);textcolor(4);printf("\xDB\xDB");
		gotoxy(62,18);textcolor(4);printf("\xDB\xDB");
		gotoxy(60,19);textcolor(4);printf("\xDB\xDB\xDB");
		gotoxy(59,20);textcolor(4);printf("\xDB\xDB");
		gotoxy(62,20);textcolor(4);printf("\xDB\xDB");
		gotoxy(58,21);textcolor(4);printf("\xDB\xDB");
		gotoxy(63,21);textcolor(4);printf("\xDB\xDB");
		gotoxy(57,22);textcolor(4);printf("\xDB\xDB");
		gotoxy(64,22);textcolor(4);printf("\xDB\xDB");

		
		textcolor(4);gotoxy(52,5);printf("opcao invalida!!!");
		textcolor(11);gotoxy(75,6);scanf("%d",&a);
		system("cls");
		
		}    
        system("cls");
        
        
    if(a==1){
    	gotoxy(40,2);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    	gotoxy(1,6);textcolor(15);printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    	
    	gotoxy(40,1);textcolor(10);printf("***Informe os campos***\n\n\n");
    	
    	
    	printf("       Nome: \n\n");
    	gets(incluir.nome);
    	
    	printf("       Telefone: \n\n");
    	gets(incluir.telefone);
    	printf("       E-Mail: \n");
    	
	system("pause");
	system("cls");
	textcolor(3);
	gotoxy(45, 4);	printf("PROCESSANDO\n");
	gotoxy(42, 5);
	textcolor(8);
	for(i=0; i<15; i++){
	
		printf("\xDB"); 
		Sleep(500);
	}	
	
    system("cls");	
    
    textcolor(7);
    gotoxy(50, 4);
    printf("CONTATO SALVO COM SUCESSO!");
    Sleep(4000);
    system("cls");
    	
	}
        
        
        
        
	}while(a!=6);
	
	return(0);
}

