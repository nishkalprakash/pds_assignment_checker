#include<stdio.h>
int main ()
{
  int principle, year;
  printf("enter principle amount and total years of repayment\n");
  scanf("%d%d",&principle,&year);
  float ir,a,b;
  printf("enter interest rate\n");
  scanf("%f",&ir);
  a=(ir/100.0)*principle*year;
  b=principle +a;
  printf("total amount payable after %d years is %f",year,b);
  return 0 ;
}
