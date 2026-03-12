#include<stdio.h>
#include<string.h>

int main(){
	char a[30];
	gets(a);
	printf("%s", strrev(a));
	return 0;
}
