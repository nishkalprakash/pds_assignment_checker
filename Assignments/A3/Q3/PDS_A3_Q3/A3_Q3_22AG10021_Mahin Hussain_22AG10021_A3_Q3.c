/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:3
Description: Program to perform arithematic operation
*/

#include<stdio.h>
float a,b,v;        //a and b stores the 2 operands and v stores the value after      performing the given mathematical operation 
char c;           //c stores the mathematical operator
int main()
{
printf("Enter the data in the format: operator operand1 operand2 \n");
scanf("%c %f %f", &c, &a, &b);
if(c=='+')            //checking all the conditions and performing accordingly 
{
v=a+b;
printf("%f",v);
}
else if(c=='-')
{
v=a-b;
printf("%f",v);
}
else if(c=='*')
{
v=a*b;
printf("%f",v);
}
else if(c=='/')
{
v=a/b;
printf("%f",v);
}
else
{
printf("Error");        //message for invalid input
}
return 0;
}
