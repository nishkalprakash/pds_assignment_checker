/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to find approximate root of a cubic equation.

*/

#include<stdio.h>

int main()
{
int i1,i2,i3,i4;
double a,b,c,pa,pb,pc;
printf("enter coffiecient of x^0:");
scanf("%d",&i1);
printf("enter coffiecient of x^1:");
scanf("%d",&i2);
printf("enter coffiecient of x^2:");
scanf("%d",&i3);
printf("enter coffiecient of x^3:");
scanf("%d",&i4);
printf("enter a such that p(a)<0:");
scanf("%lf",&a);
printf("enter b such that p(b)>0:");
scanf("%lf",&b);
pa=i1+i2*a+i3*a*a+i4*a*a*a;
pb=i1+i2*b+i3*b*b+i4*b*b*b;
c=a-(pa*(b-a)/(pb-pa));
pc=i1+i2*c+i3*c*c+i4*c*c*c;
while(pc>0.001)
{
pa=i1+i2*a+i3*a*a+i4*a*a*a;
pb=i1+i2*b+i3*b*b+i4*b*b*b;
c=a-(pa*(b-a)/(pb-pa));
pc=i1+i2*c+i3*c*c+i4*c*c*c;
if(pc<0)
a=c;
else if(pc>0)
b=c;
}
printf("root of equation:%lf",c);
return 0;
}
