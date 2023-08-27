#include<stdio.h>
int main()
{
  int p,q,r;
  float a;
  printf("Enter the amount deposited");
  scanf("%d",&p);
  printf("time period in years");
  scanf("%d",&q);
  printf("interest rate");
  scanf("%d",&r);
  a=p+((p*q*r)/100);
  printf("total amount to be deposited=%f\n",a);
    return 0;
}
