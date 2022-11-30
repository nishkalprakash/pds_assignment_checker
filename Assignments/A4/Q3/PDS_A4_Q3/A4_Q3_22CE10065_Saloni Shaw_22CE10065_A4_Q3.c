/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 4
Description - Program to display digits reverse in words
*/

#include <stdio.h>
int main ()
{
long i=0,n,m;//declaring variables
printf("enter the any 10 or less digit number \n");
scanf("%ld",&n);//taking input
if(n>=0 && n<=9999999999)
{
if(n==0)//checking for zero
printf("Zero");
else
{
while(n>0)//start of loop
{
m=n%10;//extracting digits
if(m==0)//checking the value 
printf("Zero ");
else if (m==1)
printf("One ");
else if (m==2)
printf("Two ");
else if (m==3)
printf("Three ");
else if (m==4)
printf("Four ");
else if (m==5)
printf("Five ");
else if (m==6)
printf("Six ");
else if (m==7)
printf("Seven ");
else if (m==8)
printf("Eight ");
else if (m==9)
printf("Nine ");//printing
n=n/10;
}
}
}
else
printf("not in range");

return 0;
}//end of program


