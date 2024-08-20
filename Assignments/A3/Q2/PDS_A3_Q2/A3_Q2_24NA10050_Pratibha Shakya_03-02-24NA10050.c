#include<stdio.h>

int main()
{
	int Deposit, Withdraw;
	scanf("%d %d", &Deposit, &Withdraw);
	if(Withdraw > Deposit)
		printf("Deposited: %d \n Withdrew Failed: Balance is insufficient \n Balance: %d", Deposit, Deposit);
	else
		printf("Deposited: %d \n Withdrew: %d \n Balance: %d",Deposit, Withdraw, Deposit-Withdraw);
	return 0;
}

