//Roll no. : 23CH10066
//Name: Sourendra Nandi
#include <stdio.h>
int main()
{
  unsigned int principal,time;
  float rate,amount,SI;
  printf("Enter the Principal amount to be deposited in the bank : ");
  scanf("%d",&principal);
  printf("Enter the period of time in yrs : ");
  scanf("%d",&time);
  printf("Enter the rate of interest: ");
  scanf("%f",&rate);
  SI=(principal*rate*time)/100;
  amount = principal+SI;
  printf("The Amount payable is %f \n",amount);
  return 0;
}
  
    
