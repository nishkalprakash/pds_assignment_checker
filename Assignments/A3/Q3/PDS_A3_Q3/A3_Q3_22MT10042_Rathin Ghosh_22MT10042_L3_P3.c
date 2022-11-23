/*
Section-14
Roll no.-22MT10042
Name- Rathin Ghosh
Assignment number-3
Program description : performs basic mathematical operations on two operands namely =,-,/,*.
*/
#include <stdio.h>
int main()
{
char c;
float a,b;
printf("Enter a mathematical operator and 2 operands : ");
scanf("%c %f %f", &c, &a, &b);
switch (c)
{
case '+':
printf("Result = %f",a+b);
break;
case '-':
printf("Result = %f",a-b);
break;
case '/':
printf("Result = %f", a/b);
break;
case '*':
printf("Result = %f", a*b);
break;
default:
printf("Invalid input!");
}
return 0;
}

