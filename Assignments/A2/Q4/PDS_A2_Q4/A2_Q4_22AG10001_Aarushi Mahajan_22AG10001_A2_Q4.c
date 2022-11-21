#include <stdio.h>
#include <math.h>
int main()
{
   float c, u0, e0;
   printf("Enter the values of u0 and e0.\n");
   scanf("%f %f", &u0, &e0);
   c = 1/(sqrt(u0*e0));
   printf("The value of c is %f.",c);
   return 0;
}
