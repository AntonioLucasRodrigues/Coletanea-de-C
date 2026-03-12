#include <stdio.h>
#include<string.h>
int main() {
 
    int n;
    int o, leds, p;
    int tamanho;
    char num[110];
    
    scanf("%d", &n);
    for(o=0; o<n; o++){
        scanf("%s", &num);
        tamanho= strlen(num);
        leds=0;
        for(p = 0; p < tamanho; p++){
            if(num[p]=='1') leds+=2;
            if(num[p]=='2') leds+=5;
            if(num[p]=='3') leds+=5;
            if(num[p]=='4') leds+=4;
            if(num[p]=='5') leds+=5;
            if(num[p]=='6') leds+=6;
            if(num[p]=='7') leds+=3;
            if(num[p]=='8') leds+=7;
            if(num[p]=='9') leds+=6;
            if(num[p]=='0') leds+=6;
             
        }
       printf("%d leds\n", leds);
       leds=0;
    }
	
    return 0;
}
