#include <stdio.h>
int main()
{
	int deposit, withdraw, balance=0;
	printf("\nThe current balance of your account is %d units", balance);
	printf("\nPlease enter the amount that you need to deposit:");
	scanf("%d", &deposit);
	balance = balance + deposit;
	printf("\nThe current balance of your account is %d units", balance);
	printf("\nPlease enter the amount you need to withdraw:");
	scanf("%d", &withdraw);
	if (withdraw > balance)
	{
		printf("\nBalance is insufficient in your account.");
		printf("Your current balance is:%d units.", balance);
	}
	else
	{
		balance = balance - withdraw;
		printf("\nThe amount you withdrew is %d units.", withdraw);
		printf("\nThe current balance of your account is %d units.\n", balance);
	}
	return 0;
}
