#include <stdio.h>
int main(){
	int deposit,withdraw,balance=0,y=0;
	printf("Enter the deposit money:");
	scanf("%d",&deposit);
	printf("\n Enter the withdraw money:");
	scanf("%d",&withdraw);
	printf("\nDeposited:%d",deposit);
	if (withdraw>deposit){
		y+=1;}
	if (y==1){
		printf("\nWithdraw failed : Balance is insufficient.");}
	printf("\nwithdraw:%d",withdraw);
	balance = deposit;
	if (y!=1){
		balance= deposit-withdraw;}
	printf("\nbalance:%d",balance);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
