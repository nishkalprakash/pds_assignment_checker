#include <stdio.h>
int main()
{
	int deposit, withdraw, balance;
	printf("deposit amount");
	scanf("%d", &deposit );
	printf("deposited: %d\n", deposit);
	
	printf("enter the amount to withdraw\n");
	scanf("%d", &withdraw);
	balance = deposit;
	
	if (withdraw>>balance)
	{printf("withdraw failed: balance is insufficient\n");
	 printf("balance: %d\n", balance);}
	else { printf("withdrew: %d\n", withdraw);
	balance = balance - withdraw;
	printf("Balance: %d", balance);}
	
	return 0;
}
