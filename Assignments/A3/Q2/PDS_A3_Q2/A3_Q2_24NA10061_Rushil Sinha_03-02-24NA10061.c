//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to create menu for bank management system

#include <stdio.h>

int main() {
	int deposit, withdraw, balance = 0;
		
	
		printf("Deposit:");
		scanf("%d", &deposit);
	
		printf("Withdraw:");
		scanf("%d", &withdraw);
		
		if (deposit >= withdraw) {
			balance = deposit - withdraw;
			printf("\nBalance: %d \n", balance);
			}
		else {
			printf("Withdraw failed: Balance is insufficient \n");
			printf("Balance: %d", deposit);
		}
return 0;
}

