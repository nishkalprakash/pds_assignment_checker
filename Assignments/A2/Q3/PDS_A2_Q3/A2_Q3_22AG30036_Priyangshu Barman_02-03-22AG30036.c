#include<stdio.h>
#include<math.h>
int main()
{
    double x0;
    double y0;
    double theta;
    double u;
    double a;
    double t;
    double Xt,Yt;
    printf("Enter x0 = ");
    scanf("%lf",&x0);
    printf("Enter y0 = ");
    scanf("%lf",&y0);
    printf("Enter theta = ");
    scanf("%lf",&theta);
    printf("Enter u = ");
    scanf("%lf",&u);
    printf("Enter a = ");
    scanf("%lf",&a);
    printf("Enter t = ");
    scanf("%lf",&t);
    Xt = x0 + (cos(theta*M_PI/180.0)*(u*t+0.5*a*t*t));
    Yt = x0 + (sin(theta*M_PI/180.0)*(u*t+0.5*a*t*t));
    printf("Q(%lf,%lf)",Xt,Yt);
    return 0;
}
