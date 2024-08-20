#include<stdio.h>
int main()
{
int deposit,withdraw,balance;
printf("Enter deposit and withdraw amount\n");
printf("check balance\n");
scanf("%d%d",&deposit,&withdraw);
if (withdraw>>deposit){
printf("balance is insufficient\n");
}
else {
printf("withdraw %d", withdraw);

}
balance = deposit - withdraw;
printf(" Balance %d", balance);
return 0;
}


