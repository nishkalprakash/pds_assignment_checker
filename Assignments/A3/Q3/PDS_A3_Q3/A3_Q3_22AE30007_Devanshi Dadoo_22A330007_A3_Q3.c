/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 3
desciption: program to operate the given numbers 
*/


#include<stdio.h>

int main()
{
char operation;
float num1, num2,sol;

printf("Enter operation");
scanf("%c",&operation);
printf("Enter num1");
scanf("%f", &num1);
printf("Enter num2");
scanf("%f", &num2);
if (operation=='+')
{
 sol=num1+num2;
}
if(operation=='-')
{
 sol=num1-num2;
}
if(operation=='*')
{
 sol=num1*num2;
}
if(operation=='/')
{
 sol=num1/num2;
}
printf("Solution=%f", sol);
}

