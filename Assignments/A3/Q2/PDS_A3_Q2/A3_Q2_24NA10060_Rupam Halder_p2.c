#include <stdio.h>
int main(){
int dpm,wdm,balance;
balance=0;

printf("Enter the deposit amount:");
scanf("%d",&dpm);
printf("Enter the withdraw amount:");
scanf("%d",&wdm);
if(dpm>=wdm){
balance=dpm-wdm;
printf("\nDeposited:%d",dpm);
printf("\nWithdrew:%d",wdm);
printf("\nBalance:%d",balance);
}
else{
printf("Withdraw Failed:Balance is insufficient");}
return 0;
}

