#include<stdio.h>
#include<math.h>
int main()
{
    float x0,y0,theta,u,a,t; // u is initial speed. a is acceleration. theta is inclination
    float xt,yt;
    printf("enter the cordinate of starting point : \n");
    scanf("%f%f",&x0,&y0);
    printf("enter the inclination angle theta of path of object : \n");
    scanf("%f",&theta);
    printf("enter the initial speed : \n");
    scanf("%f",&u);
    printf("enter acceleration of body : \n");
    scanf("%f",&a);
    printf("enter time after which position of object is to be checked : \n");
    scanf("%f",&t);
    float s=u*t+0.5*t*t*a;
    xt=x0+s*cos(theta*M_PI/180);
    yt=y0+s*sin(theta*M_PI/180);
    printf(" coordinate of final position of object is : (%f,%f)",xt,yt);

}
