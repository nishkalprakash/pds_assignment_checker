/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to perform operations
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
char c;
float a,b,r;
printf("Enter the operation and the two operands\n");
scanf("%c %f %f", &c, &a, &b);
if(c=='+')
{
r=a+b;
printf("%f",r);
}
else if(c=='-')
{
r=a-b;
printf("%f",r);
}
else if(c=='*')
{
r=a*b;
printf("%f",r);
}
else if(c=='/')
{
r=a/b;
printf("%f",r);
}
else
printf("Invalid choice");
return 0;
}
