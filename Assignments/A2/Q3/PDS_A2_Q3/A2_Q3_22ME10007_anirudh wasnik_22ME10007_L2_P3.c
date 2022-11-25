
#include<stdio.h>
#include<math.h>
int main()

{
int a;
int b;
int c;
float d;
float e;
float f;
printf("coefficents of quadratic equation : ax^2+bx+c=0 \n ");
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);

e=sqrt(b*b-4*a*c);
d=(-b+(e))/(2*a);
f=(-b-(e))/(2*a);




printf("the roots of the equation is/are:");
printf("%f , %f",d,f);






}
