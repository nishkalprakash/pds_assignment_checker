#include<stdio.h>
#include<math.h>
int main()
{
    float x0,y0,u,theta,a,t,xf,yf;
    printf("Enter the value of x0:");
    scanf("%f",&x0);
    printf("Enter the value of y0:");
    scanf("%f",&y0);
    printf("Enter the value of theta:");
    scanf("%f",&theta);
    printf("Enter the value of u:");
    scanf("%f",&u);
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of t:");
    scanf("%f",&t);
    xf=x0+(u*cos(theta*M_PI/180)*t)+(0.5*a*cos(theta*M_PI/180)*t*t);
    yf=y0+(u*sin(theta*M_PI/180)*t)+(0.5*a*sin(theta*M_PI/180)*t*t);
    printf("The value of xf is %f:",xf);
    printf("The value of yf is %f:",yf);
    return 0 ;

}
