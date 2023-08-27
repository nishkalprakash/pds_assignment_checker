//Bhumika Goyal
//23MI10014
#include<stdio.h>
int main()
{
  unsigned int period,deposit;
  //deposit represents principle.
  float interestrate,simpleinterest,amount;
  printf(" amount to be deposited\n");
  scanf("%d", &deposit);
  printf(" interest rate\n");
  scanf("%f",&interestrate);
  printf("enter period\n");
  scanf("%d",&period);
  simpleinterest=( deposit*interestrate*period)/100;
  amount= deposit+simpleinterest;
  printf("amount is %f",amount);
  return 0;
}
    
  
  
