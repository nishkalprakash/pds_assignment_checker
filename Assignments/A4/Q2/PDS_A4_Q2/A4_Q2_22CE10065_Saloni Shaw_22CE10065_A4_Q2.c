/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 4
Description - Program to print sum of digits of a number
*/

#include <stdio.h>
int main ()
{
int n,m,sum=0;//declaring variables
printf("enter the number \n");
scanf("%d",&n);//taking input
if(n<0)//checking if number is negative
{
n=0-n;
while(n>0)//start of loop
{
m=n%10;//extracting digits
sum=sum+m;//caluclating sum
n=n/10;
}
sum=0-sum;//putting a negative sign
printf("%d",sum);//printing sum
}
else//for postive number
{
while(n>0)//start of the loop
{
m=n%10;//extracting digits 
sum=sum+m;//calculating sum
n=n/10;
}
printf("%d",sum);//printing sum
}
return 0;
}
//enf of program
