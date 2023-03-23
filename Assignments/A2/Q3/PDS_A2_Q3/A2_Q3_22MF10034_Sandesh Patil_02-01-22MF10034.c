#include<stdio.h>
#include<math.h>

int main()

{
    double x0,y0,u,a,t,radian,x,y,d;

    printf("enter value of x0,y0,u,a,t,radian \n");
    scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&u,&a,&radian,&t);
d = u*t + 0.5*a*t*t;
x = x0+ (d*cos(radian*M_PI/180));
y = y0+ (d*sin(radian*M_PI/180));

    printf("the value of x is %.2lf",x);
    printf("the value of y is %.2lf",y);

    return 0;
}
