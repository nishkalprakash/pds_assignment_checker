#include<stdio.h>
#include<math.h>
int main()
{
    int x0,y0,theta,a,t;
    double u;
    printf("Enter the value of x0:");
    scanf("%d",&x0);
    printf("Enter the value of y0:");
    scanf("%d",&y0);
    printf("Enter the value of theta:");
    scanf("%d",&theta);
    printf("Enter the value of t:");
    scanf("%d",&t);
    double x1=x0+(t*cos(theta*M_PI/100)*(u+a*t/2));
    double y1=y0+(t*sin(theta*M_PI/100))*(u+a*t/2);
    printf("The final value of abscissa x1=%lf\n",x1);
    printf("The final value of ordinate y1=%lf\n",y1);
    return 0;
}
