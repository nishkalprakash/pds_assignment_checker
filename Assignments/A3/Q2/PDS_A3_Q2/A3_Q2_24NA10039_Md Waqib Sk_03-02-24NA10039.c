//bank menu
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
int main(){

int deposit;
int withdraw;
int  balance=0;

printf("Deposit:\n");
scanf("%d",&deposit);
balance+=deposit;

printf("witdraw:\n");
scanf("%d",&withdraw);

printf("Deposited:%d \n",deposit);

if(withdraw>balance){
printf("Withdraw Failed:Balance is insufficient \n");	
}
else{
printf("withdrew: %d \n",withdraw);
balance-=withdraw;
}

printf("balance:%d \n",balance);






}
