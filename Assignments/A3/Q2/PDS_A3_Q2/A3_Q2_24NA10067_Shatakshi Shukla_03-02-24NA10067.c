// program creator Shatakshi Shukla
//roll no. 24NA10067
// program to print menu for a bank management system
#include <stdio.h>
int main()
{
   int deposit,withdraw;
   printf("Enter the amount deposited:\n");
   scanf("%d",&deposit);
   printf("Enter the amount withdrawn:\n");
   scanf("%d",&withdraw);
   if(withdraw<=deposit){
   printf("Balance left is:%d \n",deposit-withdraw);
   }
   else{
   printf("Balnce is insufficient \n");
   }
   printf("Exit");
   return 0;
   }
