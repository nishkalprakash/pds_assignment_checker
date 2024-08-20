#include <stdio.h>
int main()
{
int deposit,withdraw,balance;
printf(" a. Deposit Money\n b. Withdraw Money\n c. Check Balance \n d. Exit");
scanf("%d", &deposit);
scanf("%d", &withdraw);
balance = deposit - withdraw;
if ( withdraw > deposit)
printf("Balance is insufficient\n");
else
printf( "withdraw = %d\n", withdraw);

if ( withdraw > deposit)
printf("balance = %d\n",deposit);
else
printf("balance = %d",balance);
return 0;
}


 
