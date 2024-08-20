#include <stdio.h>
int main()
{ 
int Deposited,Withdrew,Balance=0;
printf ("Deposit");
scanf("%d, &Deposited );
printf ("Withdraw:");
scanf("%d",&Withdrew);
Balance= Deposited - Withdrew; 
if (Balance < 0)
{
 printf("Deposited; %d\n",Deposited)
 printf("Withdraw Failed: Balance is Insufficient\n")
}

else 
{  
   printf("Deposited: %d\n",deposited);
   printf("Withdrew: %d\n",Withdrew);
   printf("Balance: %d\n",Balance);