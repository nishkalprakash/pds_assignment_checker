/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:4
description:roots approximation*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int l,m,n,o;//initializing variables to store coefficients
    printf("Enter coefficient of x^0:");
    scanf("%d",&o);
    printf("Enter coefficient of x^1:");
    scanf("%d",&n);
    printf("Enter coefficient of x^2:");
    scanf("%d",&m);
    printf("Enter coefficient of x^3:");
    scanf("%d",&l);
    double pa,pb;//polynomial value at and b respectively
    double a=0.0,b=0.0;//define a and b
    scanf("%lf",&a);//input a and b
    scanf("%lf",&b);
    pa=l*a*a*a+m*a*a+n*a+o;//computing polynomial value at a and b
    pb=l*b*b*b+m*b*b+n*b+o;
    while ((pa>=0.0&&pb<=0.0)||(pa>=0.0&&pb<=0.0))
    {
         scanf("%lf",&a);
         scanf("%lf",&b);
         pa=l*a*a*a+m*a*a+n*a+o;//computing polynomial value at a and b
         pb=l*b*b*b+m*b*b+n*b+o;
    }
    double temp;//variable used while swapping a and b if a>b
    if(a>b)//In question given to initialize b must be greater than a 
    {
       temp=a;
       a=b;
       b=temp;
    }
    double c,pc;//initialize value of polynomial at c
    c=(pa*(b-a)/(pa-pb))+a;//compute where the straight line joining (a,p(a))and (b,b(p))cut x axis
    pc=l*c*c*c+m*c*c+n*c+o*1.0;//polynomial at c
    while(abs(pc)>0.001)//given condition for precision
    {
    c=(pa*(b-a)/(pa-pb))+a;
    pc=l*c*c*c+m*c*c+n*c+o*1.0;
    pa=l*a*a*a+m*a*a+n*a+o*1.0;
    pb=l*b*b*b+m*b*b+n*b+o*1.0;
    if((pa>=0&&pc>=0)||(pa<=0&&pc<=0))//condition to check sign of value of polynomial at a and c is same or not
    {
    a=c;
    }
    else if((pb>=0&&pc>=0)||(pb<=0&&pc<=0))//condition to check sign of value of polynomial at b and c is same or not
    {
    b=c;
    }
    }
    printf("Root of the equation is:%lf",c);//printing of the root
    return 0;
}

