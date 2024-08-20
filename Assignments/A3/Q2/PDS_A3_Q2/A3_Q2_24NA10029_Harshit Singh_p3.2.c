#include<stdio.h>
int main()
{
   int deposit , withdraw, balance;
   printf("Enter the amount you want to deposit =");
   scanf("%d",&deposit);
   printf("Enter the amount you want to withdraw = ");
   scanf("%d",&withdraw);
   
  if (withdraw > deposit)
  {
   printf("balance is insuficient ");
  
  printf(" your balance = %d\n", deposit);
  }
 else
 { balance = deposit - withdraw ;
 printf(" your balance = %d\n", balance);
 }
 getchar();
 return 0;
 }
