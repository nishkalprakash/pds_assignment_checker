/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 4

Description-Root of a cubic equation

*/
#include <stdio.h>
int main()
{
int c0,c1,c2,c3;
double a,b,c,pa,pb,pc;
printf("Enter coefficient of x^0: ");
scanf("%d",&c0);
printf("\nEnter coefficient of x^1: ");
scanf("%d",&c1);
printf("\nEnter coefficient of x^2: ");
scanf("%d",&c2);
printf("\nEnter coefficient of x^3: ");
scanf("%d",&c3);
printf("\nEnter a such that p(a)<0: ");
scanf("%lf",&a);
printf("\nEnter b such that b>a and p(b)>0: ");
scanf("%lf",&b);
do
{
pa=c0+c1*a+c2*a*a+c3*a*a*a;
pb=c0+c1*b+c2*b*b+c3*b*b*b;
c=a-(pa*(b-a)/(pb-pa));
pc=c0+c1*c+c2*c*c+c3*c*c*c;
if(pc<0)
a=c;
else if(pc>0)
b=c;
}
while(pc>0.001);
printf("Root of the polynomial: %lf",c);
return 0;
}

