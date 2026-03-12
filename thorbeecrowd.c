#include <stdio.h>
 
int main() {
 
 int c, nome[20], i, f;
 scanf("%d", &c);
 
 for(i=0; i<c; i++){
     scanf("%s%d", &nome, &f);
     if(nome[0]=='T'&& nome[1]=='h'&& nome[2]=='o'&& nome[3]=='r'){
         printf("Y\n");
     }else{
          printf("N\n");
     }
 }
 
    return 0;
}
