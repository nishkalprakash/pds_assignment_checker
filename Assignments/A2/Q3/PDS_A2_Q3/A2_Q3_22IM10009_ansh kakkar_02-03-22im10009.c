#include<stdio.h>
#include<math.h>
int main()
{
    double Xo,Yo,u,theta,alpha,Xt,Yt,t,a;
    printf("enter the value of Xo\n");//initial position of x coordinate
    scanf("%lf",&Xo);
    printf("enter the value of Yo\n");//initial position of y coordinate
    scanf("%lf",&Yo);
    printf("enter the value of u\n");//initial velocity
    scanf("%lf",&u);
    printf("enter the value of theta\n");//inclined angle
    scanf("%lf",&theta);
    printf("enter the value of alpha\n");//accelaration
    scanf("%lf",&alpha);
    printf("enter the value of time\n");//time
    scanf("%lf",&t);
    Yt= Yo + u*sin(theta*M_PI/180)*t+0.5*alpha*sin(theta*M_PI/180)*t*t;
    Xt= Xo + u*cos(theta*M_PI/180)*t+0.5*alpha*cos(theta*M_PI/180)*t*t;
    printf("value of (Xt,Yt)=(%lf,%lf)",Xt,Yt );
    return 0;



}
