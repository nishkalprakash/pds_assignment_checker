#include<stdio.h>
#include<math.h>
int main()
{double a,b,c,d,r1,r2;
printf("Enter the cofficients of the quadratic equation ax2+bx+c whose roots are to be calculated\n");
scanf("%lf%lf%lf",&a,&b,&c);
printf("The cofficients of the quadratic equation are:\n");
printf("%lf\n%lf\n%lf\n",a,b,c);
d=((b*b)-(4.0*a*c));
r1=(-b/(2*a) + (sqrt(d)/(2*a)));
r2=(-b/(2*a) - (sqrt(d)/(2*a)));
if(d>0)
printf("The roots of the equation are:\n%lf\n%lf\n",r1,r2);
if(d<0)
{printf("The roots of the quadratic equation are complex");}
if(d==0)
{
r1=(-b/(2*a));
r2=r1;
 printf("The roots of the equation are real and equal");
printf("The roots are %lf%lf",r1,r2);}
}
