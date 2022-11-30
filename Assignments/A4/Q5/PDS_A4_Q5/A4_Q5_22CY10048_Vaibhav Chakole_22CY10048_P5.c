/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 4
Description : to print root of a cubic polynomial
*/
#include<stdio.h>
int main()
{
double a,b,pa,pb,pc,c;
int c1,c2,c3,c4;
printf("\nEnter coefficient of x^0:"); // getting coefficients of polynomial from user
scanf("%d",&c4);
printf("\nenter coefficient of x^1:");
scanf("%d",&c3);
printf("\nenter coefficient of x^2:");
scanf("%d",&c2);
printf("\nenter non zero coeficient of x^3:");
scanf("%d",&c1);
printf("\nenter 'a' such that p(a)<0 : ");
scanf("%lf",&a);
printf("\nenter 'b' such that b>a and p(b)>0 :");
scanf("%lf",&b);
pa=c1*a*a*a+c2*a*a+c3*a+c4;
pb=c1*b*b*b+c2*b*b+c3*b+c4;
c=a-(pa*(b-a)/(pb-pa));
pc=c1*c*c*c+c2*c*c+c3*c+c4;
while(pc>0.001)  // calculating roots for polynomial
{
pa=c1*a*a*a+c2*a*a+c3*a+c4;
pb=c1*b*b*b+c2*b*b+c3*b+c4;
c=a-(pa*(b-a)/(pb-pa));
pc=c1*c*c*c+c2*c*c+c3*c+c4;
if(pc<0)
a=c;
else if(pc>0)
b=c;
}
printf("root of polynomial = %lf\n",c); // printing roots of polynomial
return 0;
}
