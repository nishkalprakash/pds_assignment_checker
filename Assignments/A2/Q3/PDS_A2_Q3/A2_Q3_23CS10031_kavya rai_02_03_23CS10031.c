#include<stdio.h>
int main()
{
  unsigned int p, t;
  float r, i, a;
  printf("enter the principle amount to be deposited : ");
  scanf("%d",&p);
  printf("enter the period of deposit in years : ");
  scanf("%d",&t);
  printf("enter the interest rate : ");
  scanf("%f",&r);
  i=(p*r*t)/100;
  a=p+i;
  printf("total amount payable at the end of deposit period : %f",a);
  return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
  
