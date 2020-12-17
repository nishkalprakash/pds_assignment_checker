#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,d,e,f;
printf("Enter the coefficients of the quadratic equation\n");
scanf("%f %f %f\n",&a,&b,&c);
printf("the coefficients are %f %f %f\n",a,b,c);
d=(b*b)-(4*a*c);
e=(-b+sqrt(d))/(2*a);
f=(-b-sqrt(d))/(2*a);
if(d<0)printf("the roots are complex");
else printf("the roots are (%f,%f)",e,f);
if (d==0)printf("the roots are equal");


}
