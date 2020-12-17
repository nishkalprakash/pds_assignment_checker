/* Program to evaluate roots of a quadratic equation */

#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c;
  float d;
  printf("Enter the coefficients a,b,c of the quad. equation ax^2+bx+c:\n");
  scanf("%f%f%f", &a, &b, &c);

  d=(b*b)-(4.0*a*c);

  if(d<0)
   {
     printf("The roots of the equation are imaginary");
   }
  else if(d==0.0)
  {
     float r;
     r=-b/(2.00*a);
     printf("The roots are equal x1=x2= %f", r);
  }
  else
  {
      float r1,r2;
      r1=(-b+sqrt(d))/(2.0*a);
      r2=(-b-sqrt(d))/(2.0*a);
      printf("The roots are x1=%f and x2=%f", r1, r2);
  }
  return 0;
}
