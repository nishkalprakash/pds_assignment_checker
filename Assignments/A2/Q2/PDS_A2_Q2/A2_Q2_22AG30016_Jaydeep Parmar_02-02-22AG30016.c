#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,sigma,Rs,Ts,D,Tp;
    alpha= 0.306;
    sigma=1.2;
    Rs=6.96e8;
    Ts=1.3654e-11;
    D=1.496e11;
    Tp=Ts*sqrt(Rs*(sqrt(1-alpha)/sigma))/(2*D);
    printf("%le",Tp);
    double alpha1,sigma1,Rs1,Ts1,D1,Tp1;
    printf("write values of alpha1/n,sigma1/n,Rs1/n,Ts1/n,D1/n,Tp1/n");
    Tp1=Ts1*sqrt(Rs1*(sqrt(1-alpha1)/sigma1))/(2*D1);
    printf("we will get value %le",Tp1);
    return 0;
}
