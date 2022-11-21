#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   float x,y;
   printf("Enter the coefficients of the quadratic equation\n");
   scanf("%d%d%d",&a,&b,&c);
   x=(-b+sqrt(b*b-4*a*c))/(2*a);
   y=(-b-sqrt(b*b-4*a*c))/(2*a);   
   printf("first root= %f second root= %f",x,y);
   return 0;
}
