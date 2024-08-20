#include <stdio.h>
int main()
{
	int balance=0, withdraw, deposit, toExecute;
	
	printf("Deposit Money: ");
	scanf("%d", &deposit);
	printf("Withdraw Money: ");
	scanf("%d", &withdraw);
	
	if(deposit>withdraw)
	{
		balance = balance + deposit;
		balance = balance - withdraw;
		printf("Deposited: %d\nWithdrew: %d\nBalance : %d\n" ,deposit, withdraw, balance);
	}
	else
	{
		balance = balance + deposit;
		printf("Deposited: %d\nWithdraw Failed: Balance is Insufficient\nBalance : %d\n" ,deposit, balance);
	}
	
	return 0;
}
