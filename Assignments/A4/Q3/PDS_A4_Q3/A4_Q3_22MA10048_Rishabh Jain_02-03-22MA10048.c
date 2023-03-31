#include <stdio.h>
#include <math.h>

int main()
{
    double x0,y0,theta,u,a,t,rad,xt,yt;
    printf("enter initial coordinates,speed,theta,acceleration and time: ");
    scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&theta,&u,&a,&t);

    rad= theta*M_PI/180.0;  /*converting degrees to radian for theta*/
    /*taking components of accelerations along individual axes and applying ut+(1/2)at^2 formula*/
    xt=x0+(u*cos(rad)*t)+(0.5*a*cos(rad)*t*t);
    yt=y0+(u*sin(rad)*t)+(0.5*a*sin(rad)*t*t);
    printf("Q(Xt,Yt) = Q(%.2f,%.2f)",xt,yt);
    return 0;

}
