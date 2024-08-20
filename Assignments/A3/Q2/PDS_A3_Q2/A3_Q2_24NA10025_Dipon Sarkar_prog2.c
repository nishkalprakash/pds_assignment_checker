#include <stdio.h>
#include <math.h>

int main()
{
int withdraw,deposit,balance;
balance=0;
printf("Enter the amount to be deposited:\n");
scanf("%d",&deposit);
printf("Enter the amount to be withdraw:\n");
scanf("%d",&withdraw);
balance= deposit-withdraw;
if(balance<withdraw)
  {
   printf("deposited :%d\n withdrawal failed :insufficient balance balance:%d\n", deposit,deposit);
   }
if(balance>=0)
{
 printf("deposited :%d\n withdraw :%d\n balance:%d\n", deposit,withdraw,balance);
 }
  
   
   
 
getchar();
return 0;
}



