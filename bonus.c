#include <stdio.h>

int main()
{
   char nome[50];
    double sal, ve, bonus;
  gets(nome);
  scanf("%lf%lf", &sal, &ve);
  bonus= sal+ 0.15*ve;
  printf("TOTAL = R$%.2lf\n", bonus);

    return 0;
}
