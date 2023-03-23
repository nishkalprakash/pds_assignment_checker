#include<stdio.h>
#include<math.h>

int main()
{
    double x0, y0, theta, u, a, t, delta, pi, xt, yt;

    // Taking input from user
    printf("Enter the value of x0 in: \n");
    scanf("%lf", &x0);

    printf("Enter the value of y0 : \n");
    scanf("%lf", &y0);

    printf("\n----For theta write the value of angle made with positive x-axis only----\n\n");
    printf("Enter the value of theta in degree : \n");
    scanf("%lf", &theta);

    printf("Enter the value of initial velo : \n");
    scanf("%lf", &u);

    printf("Enter the value of accln in : \n");
    scanf("%lf", &a);

    printf("Enter value of time in seconds after which you need to find the position : \n");
    scanf("%lf", &t);

    // Converting theta in degree to an angle in radian
    pi = 3.14;
    delta = pi*theta/180;

    /*
    The concept of equation of motion was used to calculate the coordinate of x and y seperately by
    resolving velocity and acceleration in x and y axis
    */

    // Writing accln in x and y axis
    double ax, ay;
    ax = a*cos(delta);
    ay = a*sin(delta);

    // Writing initial speed in x and y axis
    double ux, uy;
    ux = u*cos(delta);
    uy = u*sin(delta);

    // Calculating the final positions

    xt = ux*t + 0.5*ax*(t*t);
    yt = uy*t + 0.5*ay*(t*t);

    // To print the final position
    printf("\nThe final position of object is :\n");
    printf("(xt,yt) = (%lf,%lf)\n", xt,yt);

    return 0;
}
