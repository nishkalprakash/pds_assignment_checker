#include<stdio.h>
#include<math.h>
    int main(){
        double x0, y0,xt,yt,theta,u, a, t;
        printf("Enter the value of x0 :");
        scanf("%lf", &x0);
        printf("Enter the value of y0 :");
        scanf("%lf", &y0);
        printf("Enter the value of theta:");
        scanf("%lf", &theta);
        printf("Enter the value of u:");
        scanf("%lf", &u);
        printf("Enter the value of a:");
        scanf("%lf", &a);
        printf("Enter the value of t:");
        scanf("%lf", &t);
        xt = x0+(u*cos(theta*M_PI/180)*t)+(0.5*a*cos(theta*M_PI)*t*t);  // we use equation of motion
        yt = y0+(u*sin(theta*M_PI/180)*t)+(0.5*a*sin(theta*M_PI)*t*t);
        printf("final position : %lf,%lf", xt, yt);
        return 0;
    }
