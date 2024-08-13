#include <stdio.h>
#include <math.h>
int main()
{
   double alpha,rho,Rs,Ts,D;
   double Tp;
   printf("THE VALUES OF ALPHA,RHO,Rs,Ts,D are:");
   scanf("%lf %lf %le %le %le",&alpha,&rho,&Rs,&Ts,&D);
   printf("The value of Tp is:\n%lf",Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D));
   double a2= 0.306;
   double rho2=1.2;
   double Rs2=6.96e8;
   double Ts2=1.3654e-11;
   double D2=1.496e11;
   double Tp2;
   Tp2=Ts2*sqrt((Rs2*sqrt((1-a2)/rho2))/2*D2);
   printf("\nThe second value of Tp2:%le",Tp2);
   }
   
