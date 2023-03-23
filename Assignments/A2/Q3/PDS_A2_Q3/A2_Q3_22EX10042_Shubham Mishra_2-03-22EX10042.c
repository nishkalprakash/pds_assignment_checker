#include<stdio.h>
#include<math.h>
int main()
{
    double x0,y0,u,l,a,x1,y1,t;
    printf("the value of x0,y0,u,l,a,t is:");
    scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&u,&l,&a,&t);
    x1=x0+u*cos(l*(3.14/180))*t+.5*a*cos(l*(3.14/180))*pow(t,2);
    y1=x0+u*sin(l*(3.14/180))*t+.5*a*sin(l*(3.14/180))*pow(t,2);
    printf("q(%lf %lf)",x1,y1);
    return 0;
}
