#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho,Rs,Ts,D,Tp;
    alpha = 306e-3;
    rho= 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
    printf("Tp value from given values:%lf\n",Tp);
    printf("ENTER THE DATA:");
    scanf("%lf %lf %lf %lf %lf", &alpha,&rho,&Rs,&Ts,&D);
    Tp= Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
    printf("The value of Tp from input values: %lf\n",Tp);
    return 0;
}
