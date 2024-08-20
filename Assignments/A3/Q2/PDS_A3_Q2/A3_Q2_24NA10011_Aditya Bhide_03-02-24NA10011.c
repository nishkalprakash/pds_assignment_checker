// Program to create menu for bank management system
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
void main()
{
  int balance=0,withdraw,deposit;
  printf("Deposit: ");
  scanf("%d",&deposit); //To accept deposit amount
  balance=deposit;
  printf("Withdraw: "); //To accept withdraw amount
  scanf("%d",&withdraw);
  if(deposit>=withdraw) //To check if deposited amount is more that amount to be withdrawed
  {
    balance=deposit-withdraw;
    printf("\nDeposited: %d\nWithdraw: %d\nBalance: %d",deposit,withdraw,balance);
  }  
  else
  {
    printf("\nDeposited: %d\nWithdraw Failed: Balance is insufficient\nBalance: %d",deposit,balance);
  }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


