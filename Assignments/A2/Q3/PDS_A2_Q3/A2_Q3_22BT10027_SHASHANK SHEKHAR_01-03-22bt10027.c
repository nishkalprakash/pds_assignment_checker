#include <stdio.h>
#include <math.h>
int main()
{
    double x0,y0,u,theta,a,xt,yt,t;
    printf("Enter the values of x,y,u,theta,a,t \n");
    scanf("%lf %lf %lf %lf %lf %lf",&x0,&y0,&u,&theta,&a,&t);
    xt = cos(1.0*theta*M_PI/180)*(u*t*1.0 + 0.5*a*t*t) + x0;
    yt = sin(1.0*theta*M_PI/180)*(u*t*1.0 + 0.5*a*t*t) + y0;
    printf("Q(X0,Y0) = (");
    printf("%lf",xt);
    printf(" , ");
    printf("%lf",yt);
    printf(")");
    return 0;
}
