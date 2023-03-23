#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho,Rs,Ts,D;
    printf("enter the input values");
    scanf("%lf %lf %lf %lf %lf",&alpha,&rho,&Rs,&Ts,&D);
    double Tp;
    Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/2*D);
    printf("%lf",Tp);
    return 0;

}
