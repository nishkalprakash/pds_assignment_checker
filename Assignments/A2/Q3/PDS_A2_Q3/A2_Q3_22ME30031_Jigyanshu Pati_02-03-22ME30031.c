#include<stdio.h>
#define pi 3.14
int main()
{

    float x0, y0, theta, u, a, t, xt, yt;
    scanf("%f",&x0);//value of y0
    scanf("%f",&y0);//value of x0
    scanf("%f",&theta);//value of theta
    scanf("%f",&u);//value of u
    scanf("%f",&a);//value of a
    scanf("%f",&t);//value of t
    xt=x0+(u*cos(pi*theta/180)*t)+(0.5*a*cos(pi*theta/180)*t*t);//using the formula of kinematics
    yt=y0+(u*sin(pi*theta/180)*t)+(0.5*a*sin(pi*theta/180)*t*t);//using the formula of kinematics

    printf("Q(xt,yt)=Q(%f,%f)", xt, yt);// value of xt and yt
    return 0;//end of program

}


