//Design a menu for bank 

#include<stdio.h>

int main(){
     int choice,deposit,wMoney,balance = 0;                    //Declaring variables with suitable data types   //Choice selection
     
     
     printf("Enter amount to deposit : ");                          //Depositing amount
     scanf("%d",&deposit);
     balance += deposit ;
     printf("%d deposited successfully \n",deposit);
     printf("Balance = %d \n",balance);
     
     printf("Enter amount to withdraw : ");                          //Withdrawing amount
     scanf("%d",&wMoney);
     if (wMoney > balance){
          printf("Balance is insufficient \n");
     }
     else{
          printf("%d withdrawn successfully \n",wMoney);
          balance -= wMoney ;
          printf("Balance = %d \n",balance);
     }
}     
     
     
