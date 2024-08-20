#include<stdio.h>

int main()
{
  int deposit, balance , withdraw;
  printf("Enter the amount want to deposit = ");
  scanf("%d",&deposit);
  printf("Enter the amount you want to withdraw = ");
  scanf("%d",&withdraw);
  if(withdraw > deposit)
  {
    printf(" Balance is insufficient \n");
    
    printf("Your balance = %d\n", deposit);
    
  }
  else{
  balance = deposit - withdraw ;
  
  printf(" Your balance = %d\n", balance);
 } 
  getchar();
  return 0;
 
}
