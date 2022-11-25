/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:3
Description: Program to print the two digit integer between 20 to 99 in words
*/

#include<stdio.h>
int n,u,t;
int main()
{
printf("Enter two digit integer between 20 to 99 \n");
scanf("%d", &n);
if(n>=20&&n<=99)   //to check if the no. is in given range or not
{
t=n/10;      //t is used to store tens place of the inputted no.
if(t==2)
{
printf("Twenty ");
}
else if(t==3)
{
printf("Thirty ");
}
else if(t==4)
{
printf("Forty ");
}
else if(t==5)
{
printf("Fifty ");
}
else if(t==6)
{
printf("Sixty ");
}
else if(t==7)
{
printf("Seventy ");
}
else if(t==8)
{
printf("Eighty ");
}
else if(t==9)
{
printf("Ninety ");
}
u=n%10;           //u is used to store ones place of the inputted no.
if(u==1)
{
printf("One");
}
else if(u==2)
{
printf("Two");
}
else if(u==3)
{
printf("Three");
}
else if(u==4)
{
printf("Four");
}
else if(u==5)
{
printf("Five");
}
else if(u==6)
{
printf("Six");
}
else if(u==7)
{
printf("Seven");
}
else if(u==8)
{
printf("Eight");
}
else if(u==9)
{
printf("Nine");
}
}
else
printf("Please follow the instructions");
return 0;
}
