/*
Program to create a bank management menu to withdraw and deposit.
If withdrawal amount is more than the balance show a error.

Name: S.Akshay
Roll No.: 24NA10062
*/

#include <stdio.h>
void main(){
	int dep,wit;
	printf("Deposit: ");
	scanf("%d",&dep);
	printf("Withdraw: ");
	scanf("%d",&wit);
	printf("Deposited: %d\n",dep);
	if(wit>dep){
		printf("Withdraw Failed: Balance is insufficient\n");
		printf("Balance: %d\n",dep);
	}else{
		printf("Withdrew: %d\n",wit);
		printf("Balance: %d\n",dep-wit);
	}
}
	
