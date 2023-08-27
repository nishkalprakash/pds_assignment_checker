//ROLL NO:23ME10063
//NAME:Prem Pastagia

#include <stdio.h>
int main ()
{
  unsigned int P,T;
  float rate,amount;
  printf("Please enter the amount to be deposited\n");
  scanf("%u",&P);

  printf("Please enter the time period of investment\n");
  scanf("%u",&T);

  printf("Please enter the rate\n");
  scanf("%f",&rate);

  amount=(P*T*rate)/100;
  printf("The total payable amount is %f\n",amount+P);

  return 0;
}
