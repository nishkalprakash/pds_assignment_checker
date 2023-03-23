#include<stdio.h>
#include<math.h>
int main ()
  {
   double a,o,rs,ts,d,tp;
   printf("the value of a,o,rs,ts,d is:");
   scanf("%lf,%lf,%lf,%lf,%lf",&a,&o,&rs,&ts,&d);
   tp = ts*sqrt(rs*sqrt(1.0/o-a/o)/2*d);
   printf("the value of tp is : %le",tp);
   return 0;
  }
