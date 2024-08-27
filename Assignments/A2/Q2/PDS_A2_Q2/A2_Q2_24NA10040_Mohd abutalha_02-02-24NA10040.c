#include<stdio.h>
#include<math.h>
int main()
{
   double a=0.306,b=1.2,c=6.96e8,d= 1.3654e-11,e=1.496e11;
   double Tp;
   printf("enter Tp:");
   Tp=d*sqrt(c*sqrt((1-a)/b)/2*e);
   printf("%lf",Tp);
   return 0;
}
