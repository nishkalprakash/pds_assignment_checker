#include <stdio.h>

int main(){
int deposit,withdraw,balance=0;


printf("Enter the amount of money you want to deposit\n");
scanf("%d",&deposit);

balance=balance+deposit;

printf("Enter the amount of money you want to withdraw\n");
scanf("%d",&withdraw);

balance=balance-withdraw;

if(balance<0){

balance=balance+withdraw;

printf("Deposited:%d\n",deposit);

printf("Withdraw failed:Insufficient balance\n");

printf("Balance:%d",balance);}


else{ 

printf("Deposited:%d\n",deposit);

printf("Withdrew:%d\n",withdraw);


printf("Balance:%d\n",balance);
}



return 0;
}
