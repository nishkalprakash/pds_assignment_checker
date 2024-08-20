#include <stdio.h>
int main()
{
int deposit,withdraw,balance=0;
printf("deposit amount:");
scanf("%d",&deposit);
balance=balance+deposit;
printf("withraw amount:");
scanf("%d",&withdraw);
if(withdraw>balance)
{
printf("\nWithraw failed:balance is insufficient\n");
}
else printf("balance is %d",balance=balance-withdraw);
printf("\nexit");
return 0;
}



