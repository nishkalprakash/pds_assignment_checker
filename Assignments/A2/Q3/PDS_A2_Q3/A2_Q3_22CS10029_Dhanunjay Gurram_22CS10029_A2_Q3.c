/*a program to determine the roots of a quadratic expression*/
#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c,rt1,rt2,x,y;
   printf("Give the coefficients a,b,c from the quadratic expression ax^2+bx+c=0");
   printf("a is:\n");
   scanf("%f",&a);
   printf("b is:\n");
   scanf("%f",&b);
   printf("c is:\n");
   scanf("%f",&c);
   x=b*b-4*a*c;
   y=sqrt(x);
   rt1=(-b+y)/2a;
   rt2=(-b-y)/2a;
   printf("The roots are %f",rt1,"and %f",rt2);
   return 0;
}
   
   
