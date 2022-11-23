/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description: Computing mathematical operations after reading the arithmetic operators
*/

#include<stdio.h>
#include<math.h>
int main()
{
char c;
float a,b;
printf("Please enter an operator and two numbers in the order operator,num1,num2:");
scanf("%c %f %f",&c,&a,&b);
float Sum=a+b;
float Difference=a-b;
float Product=a*b;
float Quotient=a/b;
if (c == '+')
printf("%f",Sum);
else 
if (c =='-')
printf("%f",Difference);
else
if (c == '*')
printf("%f",Product);
else
if (c == '/')
printf("%f",Quotient);
else
printf("Invalid Input");
return 0;
}
