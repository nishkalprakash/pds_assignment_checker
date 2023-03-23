#include<stdio.h>
#include<math.h>
int main()
{
    double thetad;
    double X0, Y0, u, alpha, t;
    printf("enter the value of thetad");
    scanf("%lf", &thetad);
    double pi=3.14;
    double theta= (pi*thetad)/180;
    printf("the value of theta is %lf",theta);
    printf("enter the value of X0 Y0 u alpha t");
    scanf("%lf %lf %lf %lf %lf" ,&X0, &Y0, &u, &alpha, &t);
    double Xt=X0+(u*cos(theta))*t;
    printf("the value of Xt is %lf",Xt);
    double Yt=Y0+((u*sin(theta))*t)+(0.5*alpha*pow(t,0.5));
    printf("the value of Yt is %lf",Yt);
    return 0;
}
