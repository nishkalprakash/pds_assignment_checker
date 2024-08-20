// A Program to mimick a bank management system
// Code Author: Prateek Kesavarapu
// Roll No.   : 24NA10049

#include <stdio.h>

int main(){
	int balance, deposit, withdraw; // Initializing variables
	printf("Deposit: ");
	scanf("%d", &deposit);	
	printf("Withdraw: ");
	scanf("%d", &withdraw);
	printf("\nDeposited: %d\n", deposit);
	
	// Checking if the withdrawal is possible
	if(deposit >= withdraw){
		printf("Withdrew: %d\n", withdraw);
		balance = deposit - withdraw;
	}
	else{
		printf("Withdraw Failed: Balance is insufficient\n");
		balance = deposit;
	}
	
	printf("Balance: %d\n", balance);
	return 0;
}
