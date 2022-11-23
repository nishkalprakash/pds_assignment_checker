/*Section 14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:3
description:binary arithmetic operator
*/
#include<stdio.h>
int main()
{
char operator;
float a,b;//variable declartaion a and b are numbers
float value;//stores value of the expression
printf("enter operator and two numbers\n");
scanf("%c %f %f",&operator,&a,&b);//input expression
switch (operator){
case '+':
value=a+b;
printf("%f",value);break;
case '-':
value=a-b;
printf("%f",value);break;
case '*':
value=a*b;
printf("%f",value);break;
case '/':
value=a/b;
printf("%f",value);break;
default:printf("Invalid Input");
}
return 0;
}
