/*
section 14
Roll no.  22BT30022
Name: Rahul choudhary
Assignment 3
Description : to read binary arithmatic operations
*/
#include<stdio.h>
int main()
{
char c;
float a,b;
printf("enter a binary operator(+-*/) and two operands");
scanf("%c%f%f",&c,&a,&b);
if(c=='+')
printf("%f",(a+b));
else if (c=='-')
printf("%f",(a-b));
else if (c=='*')
printf("%f",(a*b));
else if (c=='/')
printf("%f",(a/b));
return 0;
}
