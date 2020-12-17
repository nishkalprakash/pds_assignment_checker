#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c;
float D,r1,r2;

  printf("The coefficients a,b,c of the quadratic equation ax^2+bx+c are\n");
  scanf("%f%f%f",&a,&b,&c);

D=(b*b)-(4*a*c);

if(D<0)
{
printf("The roots of the equation are complex\n");
}
else
{
if(D==0)
{
r1=(-b)/(2*a);
printf("The roots of the equation are %f,%f .Both the roots are equal\n ",r1,r1);
}
else
{
r1=(-b + sqrt(D))/(2*a);
r2=(-b - sqrt(D))/(2*a);
printf("The roots of the equation are %f,%f\n",r1,r2);
}
}
}

