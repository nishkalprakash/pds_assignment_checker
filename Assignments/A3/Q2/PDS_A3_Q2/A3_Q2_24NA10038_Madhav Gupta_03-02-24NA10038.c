//Creator:Madhav Gupta
//Roll no:24NA10038
//Topic:To create a menu for a bank management system.
#include <stdio.h>
int main()
{
   int Deposit_Money, Withdraw_Money, Check_Balance;
   printf("Deposit Money");
   scanf("%d", &Deposit_Money);
   printf("Withdraw Money");
   scanf("%d", &Withdraw_Money);
   if (Withdraw_Money > Deposit_Money)
   {printf("Balance is insufficient");
   return 0;}
   else{
   printf("Your money is being withdrawn");
   printf("Check Balance");
   Check_Balance = Deposit_Money - Withdraw_Money;
   printf("%d", Check_Balance);
   }
    printf("Exit");
    return 0;
}
