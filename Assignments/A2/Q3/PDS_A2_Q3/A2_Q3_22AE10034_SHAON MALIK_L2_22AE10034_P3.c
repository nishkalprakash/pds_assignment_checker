#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c;
 printf("enter the values of a,b and c");
 scanf("%d %d %d",&a,&b,&c);//reading values of a,b and c
 float r1=(-b + sqrt(b*b-4*a*c))/(2*a);//calculating first root
float r2=(-b - sqrt(b*b-4*a*c))/(2*a);//calculating second root
printf("the roots are: %f %f",r1,r2);
}
