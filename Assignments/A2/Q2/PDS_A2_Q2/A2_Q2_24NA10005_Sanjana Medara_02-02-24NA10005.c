#include <stdio.h>
#include <math.h>
int main()
  {
      double a,rho,rs,ts,d;
      double tp;
      printf("alpha=");
      scanf("%lf",&a);
      printf("rho=");
      scanf("%lf",&rho);
      printf("Rs=");
      scanf("%lf",&rs);
      printf("Ts=");
      scanf("%lf",&ts);
      printf("D=");
      scanf("%lf",&d);
      tp=ts*sqrt(rs*sqrt(1-a/rho)/2*d);
      printf("Tp");
      return 0;
   }
      
      
