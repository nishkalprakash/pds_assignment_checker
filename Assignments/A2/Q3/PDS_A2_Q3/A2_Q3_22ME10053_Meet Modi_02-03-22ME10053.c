//Program to find the position of the particle
#include <stdio.h>
#include <math.h>

int main(){

    int x0,y0,alpha,t;
    double u,theta;                                                          // u = speed along the direction of incline , t = time, alpha = acceleration along the direction of incline
    double xt,yt;
    const float pi = 3.142856;
    printf("Enter the initial coordinates of particle at P: \n");
    scanf("%d%d",&x0,&y0);
    printf("Enter the angle made with X axis : \n");                        // Reading input like acceleration,speed,coordinates
    scanf("%lf",&theta);
    printf("Enter the initial speed : \n");
    scanf("%lf",&u);
    printf("Enter the value of uniform acceleration and time : \n");
    scanf("%d%d",&alpha,&t);
    theta = (theta*pi)/180;

    double displacement = u*t + 0.5*alpha*t*t;
    double Sx = displacement*cos(theta);
    double Sy = displacement*sin(theta);
    xt = x0 +Sx;
    yt = y0 +Sy;
    printf("Q(Xt,Yt)=(%lf,%lf)",xt,yt);

    return 0;
}
