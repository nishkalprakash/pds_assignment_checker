#include <stdio.h>

int main(){
int deposit,withdraw,balance;

printf("\n Amount to be deposited\n");
scanf("%d",&deposit);
balance=balance+deposit;//amount deposited

printf("\nAmount to be withdrawn\n");
scanf("%d",&withdraw);//Amount to be withdrawn
balance=balance-withdraw;//balance after withdrew

if(balance<0)
printf("\nDeposited:%d\nWithdraw Failed: Balance is insufficient\nBalance:%d\n",deposit,balance);

if(balance>=0)
printf("\nDeposited:%d\nWithdrew:%d\nBalance:%d\n",deposit,withdraw,balance);
	
return 0;
}
