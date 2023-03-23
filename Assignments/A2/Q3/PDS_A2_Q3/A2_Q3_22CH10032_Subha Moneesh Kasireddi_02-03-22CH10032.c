#include<stdio.h>
#include<math.h>

void main()
{
    double x0,y0,theta,u,a,t,xt,yt;
    double ux, uy, ax, ay;
    printf("x0 = ");
    scanf("%lf",&x0);
    printf("y0 = ");
    scanf("%lf",&y0);
    printf("theta = ");
    scanf("%lf",&theta);
    theta = theta*(M_PI/180.0);
    printf("u = ");
    scanf("%lf",&u);
    printf("a = ");
    scanf("%lf",&a);
    printf("t = ");
    scanf("%lf",&t);
    ux = u*cos(theta);
    uy = u*sin(theta);
    ax = a*cos(theta);
    ay = a*sin(theta);
    xt = x0 + ux*t + (0.5)*ax*t*t;
    yt = y0 + uy*t + (0.5)*ay*t*t;
    printf("Q(xt,yt) = Q(%.2lf,%.2lf)",xt,yt);
}
