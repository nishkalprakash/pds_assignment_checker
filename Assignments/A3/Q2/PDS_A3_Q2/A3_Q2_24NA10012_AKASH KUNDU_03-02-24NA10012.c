//program for bank management system
//Akash Kundu 
//24NA10012
#include<stdio.h>
int main() 
{	int bal=0; //balance
	int dep,wit; // deposit, withdraw
	printf("Deposit : ");
	scanf("%d",dep);
	printf("Withdraw : ");
	scanf("%d",wit);
	
	bal=dep;
	printf("Deposited: %d",bal);
	if (wit>bal) printf("Withdrew failed : Balance is insufficient");
	else printf("withdrew: %d",wit)
	
	bal=bal-wit
	printf("Balance: %d",bal)
	
	

	return 0;
}
