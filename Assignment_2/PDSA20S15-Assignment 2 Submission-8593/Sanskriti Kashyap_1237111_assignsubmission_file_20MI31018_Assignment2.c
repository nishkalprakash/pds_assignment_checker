#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,r1,r2,d;
printf("Enter the three coefficients of the quadratic equation");
scanf("%lf%lf%lf",&a,&b,&c);
printf("a=%lf,b=%lf,c=%lf",a,b,c);
d=(pow(b,2)-4*a*c);
printf("d=%lf",d);
if(d<0)
printf("The roots of the quadratic equation are complex\n");
if(d>=0)
{
r1=((sqrt(d)-b)/(2*a));
r2=((-b-sqrt(d))/(2*a));
printf("The roots are real. Roots of the quadratic equation are %lf,%lf\n",r1,r2);
if(r1==r2)
    printf("The roots are equal");
}
}
