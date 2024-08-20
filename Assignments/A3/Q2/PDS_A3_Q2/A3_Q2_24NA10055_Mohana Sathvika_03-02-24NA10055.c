#include <stdio.h>
int main(){
  int deposit,withdraw,balance;
  printf("enter money to be deposited:");
  scanf("%d",&deposit);
  printf("deposited:%d",deposit);
  printf("enter money to be withdrawn:");
  scanf("%d",&withdraw);
  
  if(withdraw<=deposit){
       balance=deposit-withdraw;
       printf("withdrew%d",withdraw);
       printf("balance:%d",balance);
       }
  else{
       printf("withdraw failed: balance is insuffiicient");
       }
  return 0;
}             
