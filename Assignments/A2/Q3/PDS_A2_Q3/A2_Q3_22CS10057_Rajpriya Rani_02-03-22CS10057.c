#include <stdio.h>
#include <math.h>
void main()
{
    double xo,yo,u,th,a,t,xt,yt,theta;
    printf("Enter x0, y0, u, th, a ,t :");
    scanf("%lf %lf %lf %lf %lf %lf",&xo,&yo,&u,&th,&a,&t);
    a=u*t+0.5*a*t*t;
    theta=3.14*th/180;
    xt=xo+(a*cos(theta));
    yt=yo+(a*sin(theta));
    printf("\n xt=%lf",xt);
    printf("\n yt=%lf",yt);

}
