/*
Section 14
Roll No : 22HS10050
Name : Siddharth Boadh
Assignment No : 3
Description : Program to check input integers represent a valid time or not */












#include<stdio.h>
int main()
{
float a,b;
char operator;
printf("enter the operator");
scanf("%c", &operator);
printf("enter the a,b");
scanf("%f%f", &a,&b);
switch(operator)
{
case '*':
printf("%f",a*b);
break;
case '+':
printf("%f",a+b);
break;
case '-':
printf("%f",a-b);
break;
case '/':
printf("%f",a/b);
break;
return 0;
}
}
