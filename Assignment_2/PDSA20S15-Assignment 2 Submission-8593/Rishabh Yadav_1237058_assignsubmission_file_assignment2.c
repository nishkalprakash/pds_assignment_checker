#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, root1, root2;
  scanf("%d%d%d", a, b, c);
  printf(" the coefficients of the equation are %d,%d,%d ", a, b, c);
  root1 = (-b + sqrt( pow(b,2)- 4*a*c) )/2(a), root2 =  (-b - sqrt( pow(b,2)- 4*a*c) )/2(a);
  if
  ( sqrt( pow(b,2)- 4*a*c) < 0)
  printf("the roots of the equation are complex");
  else
{


  printf("%d%d", root1, root2);
  if root1 == root2
  printf ("the roots are equal");
}
}


