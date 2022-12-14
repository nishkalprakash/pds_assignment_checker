/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Test 1 (Set-B)
Description - Program to print pattern
*/
#include<stdio.h>
int main()
{
int n,i,j;//declaring variables
printf("enter the limit\n");
scanf("%d",&n);//taking limit input
if(n>=2 && n<=10)//checking if within range provided
{
for (i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);//printing pattern
}
printf(" \n");//changing to new line
}
}
else
printf("enter limit of correct range");//printing error of range
return 0;
}
//end of program
