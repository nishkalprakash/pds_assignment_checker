#include <stdio.h>
#include <math.h>
int main()
{
 double mew,eps;
 printf("enter value of mew naught:");
 scanf("%lf",&mew);
  printf("enter value of epsilon naught:");
 scanf("%lf",&eps);
 double c = 1.0/sqrt(mew*eps);
 printf("the speed of light: %0.3e",c);
return 0;
}
 
