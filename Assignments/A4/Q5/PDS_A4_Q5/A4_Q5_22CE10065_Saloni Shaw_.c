/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 4
Description - Program to display digits reverse in words
*/

#include <stdio.h>
int main ()
{
float s1, s2 , m,n,s ,a=0,b=0,c1;
int x0,x1,x2,x3,c;
printf("enter coefficients in range -5 to 5\n");
printf("enter coefficient of x^0\n");
scanf("%d",&x0);
printf("enter coefficient of x^1\n");
scanf("%d",&x1);
printf("enter coefficient of x^2\n");
scanf("%d",&x2);
printf("enter coefficient of x^3\n");
scanf("%d",&x3);
if(x0==0)
printf("roots of the polynomial is 0");
if(x0>0)
{
while(1)
{
s1=x3*m*m*m+x2*m*m+x1*m+x0;
s2=x3*s*s*s+x2*s*s+x1*s+x0;
if(s1<0)
b=m;
else if(p2<0)
b=s;
if(b!=0)
break;
m=m-1;
s=s+1;
}
}
else if (x0<0)
{
while(1)
{
s1=x3*m*m*m+x2*m*m+x1*m+x0;
if(s1>0)
b=m;
else if (p2<0)
b=s;
if(b!=0)
break;
m=m-1;
s=s+1;
}
}
if(a>b)
{
c=a;
a=b;
b=c;
}
sa=x3*a*a*a+x2*a*a+x1*a+x0;
sb=x3*b*b*b+x2*b*b+x1*a+x0;
while(1)
{
c1=((a-b)*sa))/(sb-sa);
n=x3*c1*c1*c1+x2*c1*c1+x1*c1+x0;
{
sa=x3*a*a*a+x2*a*a+x1*a+x0;
sb=x3*b*b*b+x2*b*b+x1*b+x0;
if((r<=0.001)||(r>=0.001))
print("root= %f",c)
break;
return0;
}