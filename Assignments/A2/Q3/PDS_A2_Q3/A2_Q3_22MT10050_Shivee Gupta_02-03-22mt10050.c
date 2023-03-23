#include<stdio.h>
#include<math.h>
int main()
{
    int x0,y0,theta,a,t;
    double u;
    printf("Enter the abscissa x0 :");
    scanf("%d",&x0);
    printf("Enter the ordinate y0 :");
    scanf("%d",&y0);
    printf("Enter the value of theta :");
    scanf("%d",&theta);
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of u :");
    scanf("%lf",&u);
    printf("Enter the value of t :");
    scanf("%d",&t);
    double x1 = x0+(t*cos(theta*M_PI/180)*(u+a*t/2));
    double y1 = y0 +(t*sin(theta*M_PI/180)*(u+a*t/2));
    printf("The final abscissa x1 = %lf\n",x1);
    printf("The final ordinate y1 = %lf",y1);
    return 0;
}
