/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 3
Description : demanding operators and performing operations
*/
#include<stdio.h>
int main()
{
float a,b;
char c;
printf("which operation do you want to perform (+,-,*,/) and enter any two numbers\n"); //demanding two numbers
scanf("%c%f%f",&c,&a,&b);
if(c=='+') //performing input operations
{
printf("%f", a+b);
}
else if(c=='-') //performing input operations
{
printf("%f",a-b);
}
else if(c=='*') //performing input operations
{
printf("%f", a*b);
}
else if(c=='/') //performing input operations
{
printf("%f", a/b);
}
return 0;
}



