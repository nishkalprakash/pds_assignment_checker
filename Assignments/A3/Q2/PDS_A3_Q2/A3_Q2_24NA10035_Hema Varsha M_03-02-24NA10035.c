#include <stdio.h>
int main()
{
int bal=0,deposit,withdraw;//initial balance=0
printf("\nDeposit:");
scanf("%d",&deposit); 
bal+=deposit;
printf("Withdraw:");
scanf("%d",&withdraw); 
printf("Deposited: %d\n",deposit);
if (bal< withdraw)
printf("Withdraw failed: insufficient balance\n");
else
{bal-=withdraw;
printf("Withdrew: %d\n",withdraw);
}
printf("Balance: %d\n",bal);
return 0;
}
