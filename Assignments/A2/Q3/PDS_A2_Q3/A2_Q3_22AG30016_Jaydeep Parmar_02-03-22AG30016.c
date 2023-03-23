#include <stdio.h>;
#include <math.h>;
int main()
{
    double x0,y0,u,thetha,alpha,t1,x1,y1,s,thetha1;
    printf("enter coordinates of first point: ");
    scanf("%lf%lf",&x0,&y0);
    printf("enter initial speed:");
    scanf("%lf",&u);
    printf("enter angle with x axis:");
    scanf("%lf",&thetha);
    printf("enter acceleration:");
    scanf("%lf",&alpha);
    printf("enter time:");
    scanf("%lf",&t1);
    double t=M_PI;
    thetha1=(thetha*M_PI)/180;
    s=(u*t1)+((alpha*t1*t1)/2);
    double a,b;
    a=s*cos(thetha1);
    b=s*sin(thetha1);
    x1=x0+a;
    y1=y0+b;
    printf("final coordinates of point is:%lf %lf",x1,y1);
    return 0;
}
