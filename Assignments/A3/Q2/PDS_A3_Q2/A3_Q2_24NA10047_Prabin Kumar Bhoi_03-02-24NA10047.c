#include<stdio.h>
int main() {
	int Deposite,Withdraw,Balance;
	printf("Deposite:");
	scanf("%d",&Deposite);
	
	printf("Withdraw:");
	scanf("%d",&Withdraw);
	
	Balance=Deposite - Withdraw;
	
	if (Balance>=0) {
		printf("Balance is:%d",Balance);
	}
	else {
		printf("Balance is insufficient");
	}
	
	
	
	return 0;
	}
