#include <stdio.h>
#include <math.h>
int main()
{
  printf("In this program you can check the roots of a quadratic equation.\n");
  float a, b, c;
  printf("Please type the coefficients of the quadratic equation (starting with the leading coefficient and ending with the constant):\n");
  scanf("%f%f%f", &a, &b, &c);
  printf("The coefficients of the equation are (starting with the leading coefficient and ending with the constant):\n%f, %f, %f\n", a, b, c);
  if((pow(b,2)) - 4*a*c  < 0)
  {
      printf("The roots of the equation are complex\n");
  }
else if((pow(b,2)) - 4*a*c  == 0)
  {
    float root = (-b)/(2*a);
    printf("The roots of the equation are: %f, %f\nThe roots are equal", root, root);
  }
else
  {
    float root1, root2, delta;
    delta = sqrt((pow(b,2)) - 4*a*c);
    root1 = ((-b) + delta)/(2*a);
    root2 = ((-b) - delta)/(2*a);
    printf("The roots of the equation are: %f, %f\n", root1, root2);
  }
return 0;
}
