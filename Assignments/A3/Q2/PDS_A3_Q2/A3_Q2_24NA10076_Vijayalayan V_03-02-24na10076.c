#include<stdio.h>
int main()
{
   int deposit,withdrew,balance;
   balance=0;
   printf("enter deposit and withdrew\n");
   scanf("%d%d",&deposit,&withdrew);
   if (deposit>=withdrew)
      {
      balance+=deposit-withdrew;
      printf("deposited:%d\nwithdrew:%d\nbalance:%d\n",deposit,withdrew,balance);
      }
   else printf("deposited:%d\nwithdrew failed:balance is insufficient\nbalance:%d\n",deposit,deposit); 
   return 0;
}  
