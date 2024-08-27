// LAB3
//Deepak Jangir
//24NA10023
#include<stdio.h>

int main()
{	
	int Deposit, Withdraw;
	
	printf("enter Deposit : ");
	scanf("%d", &Deposit);
	
	printf("enter Withdraw : ");
	scanf("%d", &Withdraw);
	
	int Balance = Deposit - Withdraw;
	
	if (Balance>=0){
	printf("Balance is %d", Balance);}
	else{ printf ("Balance is insufficient");}
	
	return 0;
}
	
	
