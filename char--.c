#include <stdio.h>
#include<string.h> 
int main ( )
{
   char palavra [50];
   int tam, j=0, line;
  

       printf ("Digite a palavra desejada:\n");
       gets(palavra);
       tam= strlen(palavra);
       line= tam;

       while( line != 0){
	   
          
             while(j<tam){
			 printf ("%c", palavra[j]);
			 j++;
			 }
             
             printf ("\n");
             tam--;
             line--;
             j=0;
           } 
		   return 0;
}


