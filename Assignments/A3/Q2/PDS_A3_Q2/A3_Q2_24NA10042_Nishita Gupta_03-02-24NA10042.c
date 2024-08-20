#include<stdio.h>

int main()
{
 	int deposit_money, withdraw_money, check_balance, exit, balance;
 	
  	printf("WHICH FACILITIY YOU WANT TO USE:");
  	
  	printf("\na.deposit money");
  	printf ("\nb.withdraw money");
  	printf("\nc.check balance");
  	printf("\nd.exit ");
  	
  	scanf("%d",&deposit_money);
        scanf("%d",&withdraw_money);
  	
  	balance=0;
  	

  	printf("Deposited:=%d", deposit_money);
  	
  	 if( withdraw_money>deposit_money) 
  	 printf("Balance is insufficient");
  	 else printf("withdrew:=%d", withdraw_money);
  	 
  	 balance= deposit_money-withdraw_money;
  	 
  	
  	printf("balance=\n%d",balance);
  	
  	
  	
  	
  	return 0;
  	}
  	
  	
