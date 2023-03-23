#include<stdio.h>
#include<math.h>
int main()
{
    float x0,y0,u,theta,alpha,t,z,xt,yt;
    printf("enter a value of x:");
    scanf("%f\n",&x0);
    printf("value of y:\n");
    scanf("%f\n",&y0);
    printf("value of u:\n");
    scanf("%f\n",&u);
    printf("value of theta:\n");
    scanf("%f\n",&theta);
    printf("value of alpha:\n");
    scanf("%f\n",&alpha);
    printf("value of t:\n");
    scanf("%f\n",&t);
    z=theta*M_PI/(180);
    xt=((x0+(u*cos(z))*t))+(((0.5*alpha)*cos(z))*t*t);
    yt=((y0+(u*sin(z))*t))+(((0.5*alpha)*sin(z))*t*t);
    printf("value of X%f\n",xt);
    printf("value of Y%f\n",yt);
    return 0;

}
