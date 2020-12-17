#include <stdio.h>
#include <math.h>

void main()
{
  float a, b, c, D, x1, x2;
  printf("enter the coefficients of the quadratic equation:\n");
  scanf("%f%f%f", &a, &b, &c);

  printf("the quadratic equation is: %fx^2 + %fx + %f\n", a, b, c);
  printf("the coefficients of quadratic equation are %f, %f, %f\n", a, b, c);
  D = (b*b - 4*a*c);
  {
      if(b*b < 4*a*c)printf("the roots are complex");
      D = b*b - 4*a*c;
      x1 = (-b + sqrt(D))/(2*a);
      x2 = (-b - sqrt(D))/(2*a);
      if(D>=0) printf("the roots of the equation are: %f and %f\n", x1, x2);
  }
   if(x1==x2)printf("the roots are equal\n");
}
