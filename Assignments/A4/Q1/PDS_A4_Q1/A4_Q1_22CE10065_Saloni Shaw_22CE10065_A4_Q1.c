/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 4
Description - Program to display factors of the number
*/

#include <stdio.h>
int main ()
{
int n,i,f;//declaring variables
printf("enter the number \n");
scanf("%d",&n);//taking input
if(n<0)//checking if number is negative
n=0-n;
if(n==0)//checking if number is zero
printf("0");
else
{
i=1;
while(i<=n)//start of the loop
{
if(n%i==0)//checking for factor
printf(" %d",i );
i=i+1;//increasing counter by 1
}
}
return 0;
}//end of program
