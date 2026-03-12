#include <stdio.h>

int main(){

 int gre, inter, i, in=0,ge=0, p=0, e=0;
    do{
        scanf("%d %d", &inter, &gre);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
        p++;
        if(gre>inter){
            ge+=1;
        }
        else if(inter>gre){
            in+=1;
        }else if(inter==gre){
            e+=1;
        }
        if(i==2){
           
            printf("%d grenais\n", p);
            printf("Inter:%d\n", in);
            printf("Gremio:%d\n", ge);
            printf("Empates:%d\n", e);
            if(ge>in){
                printf("Gremio venceu mais\n");
            }
            else if(in>ge){
                printf("Inter venceu mais\n");
            }else if(ge==in){
                printf("Nao houve vencedor\n");
            }
        }
    }while(i!=2);
   
 
    return 0;
}
