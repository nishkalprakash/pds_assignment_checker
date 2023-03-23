#include <stdio.h>//header files
#include <math.h>//math library
int main()
{
    double x0,y0,theta,u,a,t,xt,yt;
    printf("Enter the value of x0\n");
    scanf("%lf",&x0);
    printf("Enter the value of y0\n");
    scanf("%lf",&y0);
    printf("Enter the value of theta\n");
    scanf("%lf",&theta);
    printf("Enter the value of initial speed u\n");
    scanf("%lf",&u);
    printf("Enter the value of uniform acceleration\n");
    scanf("%lf",&a);
    printf("Enter the value of time\n");
    scanf("%lf",&t);
    xt=x0+(u*cos((theta*M_PI)/180))*t+(0.5*a*cos((M_PI*theta)/180)*t*t);//computing the final x-coordinate
    yt=y0+(u*sin((theta*M_PI)/180))*t+(0.5*a*sin((M_PI*theta)/180)*t*t);//computing the final y-coordinate
    printf("Q(Xt,Yt) =Q(%0.2lf,%0.2lf)\n",xt,yt);//getting answers uptil 2 decimal places by 0.2f
     return 0;

}
