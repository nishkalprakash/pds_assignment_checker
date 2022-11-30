/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 4
Description :Program to find the sum of digits of a integer 
*/

#include<stdio.h>
int main()
{
    int q,sum=0;
    printf("Enter the integer : ");
    scanf("%d", &q);

while(q!=0)
{
if(q>0)
{
    sum= sum+(q%10);
    q=q/10;
}
else
{
    sum=sum+(-q%10);
    q=q/10;
}
  } printf("Sum of digits is : %d\n",sum);
   

return 0;
}
