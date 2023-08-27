//Roll No - 23IM10028\
//Name - Rishabh Dehariya

#include<stdio.h>
int main()
{
  unsigned int principal, time_period;
  float roi = 8;
  printf("The amount being deposited:");
  scanf("%u",&principal);

  printf("Enter the time period:");
  scanf("%u", &time_period);

  int interest =(principal*roi*time_period)/100;
  printf("The interest you have to pay : %d\n", interest);

  int amount = principal + interest;
  printf("Total amount you have to pay : %d\n", amount);

  return 0;

}
  
