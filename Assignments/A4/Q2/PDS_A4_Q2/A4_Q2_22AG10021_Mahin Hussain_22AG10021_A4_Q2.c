/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:4
Description: Program to print sum of the digits of the inputted number.
*/

#include<stdio.h>
long int n;
int a,c=0;
int main()
{
printf("Enter a number in the range [-999999,999999]");
scanf("%ld",&n);
if(n>=-999999&&n<=999999)
{
while(n!=0)
{
a=n%10;
c=c+a;
n=n/10;
}
printf("%d",c);
}
else
printf("Invalid Input");
return 0;
}
