#include<stdio.h>

int main(){

int i, j; 
for(i=1; i<4; i++){
  for(j=1; j<4; j++){
  if(i==j)
  printf("X ");
  else
  printf("O ");
  }
  printf("\n");
}
	getch();
return 0;
}
