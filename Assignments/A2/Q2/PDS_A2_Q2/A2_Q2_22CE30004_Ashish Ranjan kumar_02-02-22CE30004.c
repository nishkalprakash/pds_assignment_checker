#include<stdio.h>
#include<math.h>
int  main()
{
    double alpha, rho, Rs, Ts, D, Tp;
    alpha = 306e-3;
    rho = 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
    printf("value of Tp from given data : %lf\n", Tp);

    printf("enter the input values : ");
    scanf("%lf %lf %lf %lf %lf", &alpha,&rho,&Rs,&Ts,&D);
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
    printf("value of Tp from input data : %lf\n", Tp);
    return 0;




}
