#include<stdio.h>
#include<math.h>


int main()
{
    double x0,y0,u,theta,a,t,Xt,Yt;//initialization
    printf("Enter x0 y0 u theta a t:");//guiding user to input values
    scanf("%lf %lf %lf %lf %lf %lf",&x0,&y0,&u,&theta,&a,&t);//taking input
    theta=theta*3.14/180;
    Xt=x0 + u*cos(theta)*t + 0.5*a*cos(theta)*t*t;//calculating Xt
    Yt=y0 + u*sin(theta)*t + 0.5*a*sin(theta)*t*t;//calculating Yt
    printf("Finally Q(Xt,Yt)=Q(%lf,%lf)",Xt,Yt);//printing values of Xt and Yt


    return 0;
}
