#include <stdio.h>
#include <math.h>
int main()                                        //program to show the final position of a particle.
{                                                 //which is starting from (x0,y0) and all parameters to get from user.
    float s,x0,y0,theta,u,a,t,xt,yt;              //declaring variables of float type.
    printf("Enter the values accordingly.\n");
    printf("x0 = ");                              //taking x0 from user.
    scanf("%f",&x0);

    printf("y0 = ");                              //taking y0 from user.
    scanf("%f",&y0);

    printf("theta = ");                           //taking theta from user.
    scanf("%f",&theta);

    printf("u = ");                               //taking u(velocity) from user.
    scanf("%f",&u);

    printf("a = ");                               //taking a(acceleration) from user.
    scanf("%f",&a);

    printf("t = ");                               //taking t(time) from user.
    scanf("%f",&t);

    s=(u*t)+((0.5)*a*t*t);                        //calculating displacement from 2nd law of motion
    xt=x0+(s*cos(theta*M_PI/180));                //final xt
    yt=y0+(s*sin(theta*M_PI/180));                //final yt

    printf("Q(xt,yt)=(%f,%f)",xt,yt);             //showing xt,yt.
    return 0;


}
