#include<stdio.h>
#include<math.h>

int main()
{
/*
section  14
Roll No : 22GG10004
Name : #AJAY SINGH#
Assignment No : 3
Description : Program to check point
*/

float a;
float b;float c;float d;float e;
printf("Enter power consumption : ");
scanf("%f", &a);

if(a<=100)
{
b=60;
printf("%f" , b);
}
if(a>100 && a<=200)
{
c=(50+(a-100)*0.75)*1.2;
printf("%f", c);
}
if(a>200 && a<=300)
{
d=(125+(a-200)*1.20)*1.2;
printf("%f",d);
}
if(a>300)
{
e=(245+(a-300)*1.50)*1.2;
printf("%f",e);
}
return 0;
}
