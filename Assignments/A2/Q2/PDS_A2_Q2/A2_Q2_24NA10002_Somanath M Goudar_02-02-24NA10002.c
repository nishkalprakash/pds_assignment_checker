#include <stdio.h>
include <math.h>
int main()
{
float alpha,rho;
double Rs,Ts,D;

printf("Enter the value of alpha,rho,Rs,Ts,D :");
scanf("%f %f %le %le %le, &alpha,&rho,&Rs,&Ts,&D);
double Tp;
Tp=t=Ts*sqrt(Rs*sqrt(1-(alpha)/rho)/2*D);
printf("%le",Tp);
return 0;
}

