#include <stdio.h>
#include <math.h>

int main(){

int deposit,withdraw,balance;


balance = 0;

printf("Deposit money: \n Withdraw money: \n");
scanf("%d%d",&deposit,&withdraw);
balance = deposit-withdraw;

if(balance>=0){

printf("deposited:%d \n withdrawed:%d \n balance:%d \n",deposit,withdraw,balance);

}


if(balance<withdraw){


printf("deposited:%d \n withdrawed failed:Balance is insufficient \n balance:%d \n",deposit,deposit);



}

getchar();
return 0;



}
