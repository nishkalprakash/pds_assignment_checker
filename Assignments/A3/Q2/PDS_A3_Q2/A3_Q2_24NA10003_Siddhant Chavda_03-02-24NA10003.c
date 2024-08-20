#include <stdio.h>
int main()
{
int deposit,withdraw,balance;
// asking for the deposit of amount and withdraw amount

printf("MENU\n a)DEPOSIT MONEY\n b)WITHDRAW MONEY\n c)CHECK BALANCE\n d)EXIT\nEnter the amount to be deposit:");
scanf("%d",&deposit);
printf("Enter the amount to be withdraw:");
scanf("%d",&withdraw);
balance=deposit-withdraw;

// check for balance and final output
if (withdraw>>deposit){
printf("Balance is insufficient\n");
}
else{
printf("DEPOSIT:%d \nWITHDRAW:%d\nBALANCE:%d \n",deposit,withdraw,balance);
}
return 0;
}
