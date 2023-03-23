#include<stdio.h>
#include<math.h>
int main()
{
    double A0;
    double B0;
    double u;
    double theta;
    double alpha;
    double A;
    double T;
    double B;
    printf("Gives the value of A0, B0, u, theta, alpha, TIME\n");
    scanf("%lf %lf %lf %lf %lf ",&A0,&B0,&u,&theta,&alpha,&TIME);
    At = A0+u*cos(theta)+(1/2)*(alpha*cos(theta))*t*t;
    Bt= B0+u*sin(theta)+(1/2)*(alpha*sin(theta))*t*t;
    printf("Values of At and Bt: %lf %lf\n",At, Bt);
    return 0;
}
