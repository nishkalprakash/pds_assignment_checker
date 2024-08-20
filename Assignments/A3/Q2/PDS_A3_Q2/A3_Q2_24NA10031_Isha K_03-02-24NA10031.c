#include<stdio.h>
int main()
{
	int deposit,withdraw,check_balance;
	printf("deposit:");
	scanf("%d",&deposit);
	printf("withdraw:");
	scanf("%d",&withdraw);
	printf("deposited: %d\n",deposit);
	printf("withdrew:% d\n",withdraw);
	if (deposit >= withdraw){
		check_balance = deposit - withdraw;
		printf("Balance: %d\n",check_balance);}
	else{printf("withdraw failed: Balance is insufficient");}
	return 0;
	}
	
