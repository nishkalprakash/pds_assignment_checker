#include<stdio.h>
int main()
{
  int amtdeposited ;
  int periodofyears;
  float interestrate ;
  float amountpayable ;
  printf("Enter the amount deposited");
  scanf("%d",&amtdeposited);
  printf("Enter the period of years");
  scanf("%d", &periodofyears);
  printf("Enter the interest rate");
  scanf("%f",&interestrate);
  amountpayable= amtdeposited*interestrate*periodofyears/100.0+ amtdeposited ;
  printf("The amount payable is %f\n",amountpayable);
  
  return 0;
  
}
