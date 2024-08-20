//C Program for menu of a bank managing system
#include<stdio.h>

int main()
{
	int dep,wd,bal;
	//take input
	printf("Deposit:");
	scanf("%d",&dep);
	
	printf("\nWithdraw:");
	scanf("%d",&wd);
	
	printf("\nDeposited: %d",dep);
	//if the deposited amount is lesser than what we want to withdraw
	if(wd>dep)
	{
		printf("\nWithdraw Failed:Balance is insufficient");
		printf("\n Balance:%d",dep);
	}
	
	//if the deposited amount is greater than what we want to withdraw
	else
	{
		printf("\n Withdraw:%d",wd);
		printf("\nBalance: %d",dep-wd);
	}

	return 0;
}
