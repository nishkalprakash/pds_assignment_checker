#include<stdio.h>
int main()
{
  int a,t;
  float x,r;

  printf("enter the amount deposited:");
  scanf("%d",&a);
  printf("enter the time period:");
  scanf("%d",&t);
  printf("enter the rate of interest:");
  scanf("%f",&r);

  x= a + r*t;

  printf("total amount to be payed:%f",x);

  return 0;

}
