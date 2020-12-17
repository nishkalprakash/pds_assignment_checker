#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, c, D, x, y;
   scanf("%lf%lf%lf",&a,&b,&c);
   printf("The coefficients of the equation are %lf, %lf and %lf\n",a,b,c);

   D=b*b-4*a*c;
   if (D<0)
   {
      printf("The quadratic equation has complex roots.\n");
   }
   else
   {
      x=-(-b+sqrt(D))/(2*a);
      y=-(-b-sqrt(D))/(2*a);
      printf("The roots of the quadratic equation are %lf and %lf\n",x,y);
      if (x==y)
      {
         printf("The roots of the quadratic equation are equal.\n");
      }
   }
}
