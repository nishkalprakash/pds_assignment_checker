#include<stdio.h>
int main()


{
  int a,b;
  float c,d;
  printf("enter the amount deposited:");
  scanf("%d",&a);
  printf("enter the period of deposited amount");
  scanf("%d",&b);
  printf("enter the interest");
  scanf ("%f",&c);
  d= a*b*c/100;
  return 0;
}
