#include<stdio.h>

int main(){
	int deposit,withdraw,balance=0;
		printf("Deposit: ");
		scanf("%d",&deposit);
		balance=balance+deposit;
		printf("Withdraw: ");
		scanf("%d",&withdraw);
		balance=balance-withdraw;
		if (balance<0){
		printf("Withdraw Failed: Balance is insufficient\n");
		}
		else{
			printf("Deposited: %d\n",deposit);
			printf("Withdrew: %d\n",withdraw);
			printf("Balance: %d\n",balance);
		}
		
return 0;
}
