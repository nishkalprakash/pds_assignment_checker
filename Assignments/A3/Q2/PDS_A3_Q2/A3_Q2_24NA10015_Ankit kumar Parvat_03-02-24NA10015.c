#include<stdio.h>
int main()
{
   
   int Deposit,Withdraw,Balnce=0;
   
   printf("\n Deposit=");
   scanf("%d",&Deposit);
   Balnce=Deposit;
   printf("\n Withdraw=");
   scanf("%d",&Withdraw);
   
   printf(" \n Deposited=%d",Deposit);
   if (Deposit>=Withdraw){
      Balnce=Deposit-Withdraw;
      printf("\n Withdrew=%d",Withdraw);
      }
   else {
      printf("\n Withdraw failed: Balance is insuffcient");}
   printf("\n Balance=%d",Balnce); 
   return 0;
}   
   
     
   
