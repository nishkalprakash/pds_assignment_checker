/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 4
Description - Program to display pattern
*/

#include <stdio.h>
int main ()
{
long n,i,j;//declaring variables
printf("enter the pattern limit \n");
scanf("%ld",&n);//taking input
if(n>=2 && n<=10)//checking the range
{
for(i=1;i<=n;i++)//running loop for checking column
{
for(j=1;j<=i;j++)//loop for checking and printing rows
{
if(j%2==0)//checking odd or even position
printf("0");
else
printf("1");
}
printf("\n");//changing new line for next row
}
}
else 
printf("wrong range");
return 0;
}//end of program
