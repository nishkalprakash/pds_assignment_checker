//program to define variables
//code creator
#include <stdio.h>
#include <math.h>
int main()
{
double* alpha,rho,Rs,Ts,D,Tp;
alpha=0.306,rho=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11;
printf("enter the value",alpha,rho,Rs,Ts,D);
scanf("%lf,%lf,%lf,%lf,%lf",&alpha,rho,Rs,Ts,D);
Tp=Ts*(sqrt(Rs*(sqrt(1-rho)/rho)/2*D));
printf("Tp=%lf",Tp);
return 0;
}
