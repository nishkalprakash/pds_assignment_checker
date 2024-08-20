#include<stdio.h>
//program to create menu for bank management
int main(){
	int deposit;
	int withdraw;
	int balance;
	
	printf("deposit\n");
	scanf("%d",&deposit);
	printf("withdraw\n");
	scanf("%d",&withdraw);
	printf("balance = %d\n",balance = deposit- withdraw);
	if (balance<0){
	printf("balance is insufficient\n");
	}
	if (balance = 0){
	printf("balance = 0\n");
	}
	if (deposit< withdraw){
	printf("Withdraw Fail\n");
	}
	withdraw <= deposit;
	return 0;
}
