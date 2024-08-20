#include <stdio.h>

int main()
{	int bal=0, depo, with;
	printf("-----Welcome-----\n");
	printf("a. Deposit Money\nb. Withdraw Monay\n c. Check Balance\n d. Exit\n");
	
	printf("Deposit: ");		//DEPOSIT INPUT
	scanf("%d", &depo);
	bal+=depo;
	
	
	
	printf("\nWithdraw: ");		//WITHDRAWING INPUT
	scanf("%d", &with);
	bal-=with;
	
	
	
	printf("\nDeposited: %d", depo);   		//OUTPUTS
	if (bal<0)
		{
		printf("\nWithdraw Failed: Insuffiencient Balance.");
		}
	else 
		{
		printf("\nWithdrew: %d", with);
		}
	
	printf("\nBalance: %d", bal);
	
	
	
	return 0;
}
