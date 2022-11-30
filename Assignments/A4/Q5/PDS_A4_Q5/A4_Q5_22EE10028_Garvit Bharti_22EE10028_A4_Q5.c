#include<stdio.h>

int main()
{
int x1,x2,x3,x4;
double a,b,c,d,e,i,f;
printf("enter the coefficient of x^0");
scanf("%d",&x4);
printf("enter the coefficent of x^1");
scanf("%d",&x3);
printf("enter the coefficient of x^2");
scanf("%d",&x2);
printf("enter the coefficient of x^3");
scanf("%d",&x1);
a = -1000; /*intiaising the value of a and b*/
b = 1000;
if(x1!=0)
{
c = x1*a*a*a + x2*a*a + x3*a + x4;  /* value of f(a)*/
d = x1*b*b*b + x2*b*b + x3*b + x4; /* value of f(b)*/
for(;;) /*infinite loop */
{
e = (c)*(a-b)/(d-c)+a; /* x intercept of line joining (a,f(a)) and (b,f(b))*/
f = x1*e*e*e + x2*e*e + x3*e + x4; /*value of f(e)*/
if(f<0.001&&f>-0.001)
{
printf("root is %lf",e);
break;
}
else
{
if(x1>0)
{if(f>=0)
{
b = e;
}
else
{
a = e ;
}
}
else
{
if(f>=0)
{
a = e;
}
else
{
b = e ;
}
}
}
}
}
else
{printf("invalid");}
return 0;
}






