#include<stdio.h>
#include<math.h>
int main()
{
    double alpha = 0.306;
    double sigma = 1.2;
    double Rs1 = 6.96e8;
    double Ts1 = 1.3654e-11;
    double D11 = 1.496e11;
    double Tp1= Ts1*sqrt(Rs1*sqrt((1-alpha)/sigma)/2*D11);
    printf("Tp = %le",Tp1);
    double a,s,Rs, Ts, D;
    printf("Enter the value of alpha :");
    scanf("%lf", &a);
    printf("Enter the value of sigma :");
    scanf("%lf", &s);
    printf("Enter the value of Rs :");
    scanf("%le",&Rs);
    printf("Enter the value of Ts :");
    scanf("%le",&Ts);
    printf("Enter the value of d :");
    scanf("%le", &D);
    double Tp= Ts*sqrt(Rs*sqrt((1-a)/s)/2*D);
    printf("Tp = %le",Tp);
    return 0;
}
//IN both the cases the output is same and when the value are predefined (i.e. no user input)
//for the program double Tp1= Ts1*sqrt(Rs1*sqrt((1-alpha)/sigma)/2*D11); the value of Tp is 8.591320e-02.


