#include <stdio.h>
 
int main() {
 
    int p, n, i, x, y;
    
    scanf("%d%d", &p, &n);
  if(n==1|| p==1){
    printf("YOU WIN\n");
    break;
  }
    for(i=0;i<(n/2); i++){
        scanf("%d", &x);
        scanf("%d", &y);
        x+=x;
        y+=y;
    }
    p=p*n;
	if(p>(y-x)){
            printf("YOU WIN\n");
        }else{
            printf("GAME OVER\n");
        }
 
    return 0;
}

