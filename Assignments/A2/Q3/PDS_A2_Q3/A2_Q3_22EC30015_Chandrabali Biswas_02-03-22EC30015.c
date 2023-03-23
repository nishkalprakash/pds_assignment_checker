#include <stdio.h>
#include <math.h>   //including the math library
int main()
{
    double x0,y0,theta,u,a,t,r,xt,yt;    //declaring variables of double data type
    printf("x0 = ");
    scanf("%lf",&x0);
    printf("y0 = ");
    scanf("%lf",&y0);
    printf("theta = ");
    scanf("%lf",&theta);
    printf("u = ");
    scanf("%lf",&u);
    printf("a = ");
    scanf("%lf",&a);
    printf("t = ");
    scanf("%lf",&t);          //printing and taking input from user
    r=(u*t)+(0.5*a*t*t);     //calculating distance between 2 points
    xt=x0+(r*cos(theta*M_PI/180.0));   //calculating x component of the distance
    yt=y0+(r*sin(theta*M_PI/180.0));   //calculating y component of the distance
    printf("xt=%lf\nyt=%lf",xt,yt);  //printing xt and yt
    return 0;


}
