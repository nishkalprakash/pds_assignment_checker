#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c;
double r,s;

printf("Enter the coefficients a,b,c of the quadratic equation ax^2+bx+c=0\n");
scanf("%f%f%f",&a,&b,&c);

if(pow(b,2)<4*a*c)
{printf("the roots are complex\n");}
else
{r=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
 s=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
printf("roots of the quadratic equation are %f and %f\n",r,s);

if(r==s)
{printf("hence roots are equal\n");}
}
}
