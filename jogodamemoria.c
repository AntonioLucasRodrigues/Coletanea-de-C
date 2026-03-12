#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	int vet[15], i, qtd=5, num[15], existe[15], ponto=0 ;
		while(qtd<=15){
			
	
	for(i=0; i<qtd; i++){
		vet[i]=rand()%100;
		printf("%d\n", vet[i]);
	}
	Sleep(qtd*1000);
	
	system("cls");
	
	printf("Digite a sequencia: ");
	for(i=0; i<qtd; i++){
	scanf("%d", &num[i]);

		if(num[i] == vet[i]){
		existe[i]=1;
			ponto+=i;
		}
		if(qtd==i){
			printf("Acertou!!!");
		}
	else {
		printf("\n ERRRROU :(");
        return 0;
	}	}
	system("cls");
	qtd++;
}

printf("\n\nPontuacao final= %d", ponto);
	
return 0;
}
