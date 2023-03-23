#include<stdio.h>
#include<math.h>
int main()
{
    double X0, Y0, alpha, theta, u, t, Xt, Yt;
    printf("enter the input values : ");
    scanf("%lf %lf u : %lf theta : %lfn alpha : %lf Time : %lf", &X0, &Y0, &u, &theta, &alpha, &t);
    Xt = X0+u*cos(theta)+(1/2)*(alpha*cos(theta))*t*t;
    Yt = Y0+u*sin(theta)+(1/2)*(alpha*sin(theta))*t*t;
    printf("the value of Xt and Yt : %lf %lf\n", Xt, Yt);
    return 0;

}
