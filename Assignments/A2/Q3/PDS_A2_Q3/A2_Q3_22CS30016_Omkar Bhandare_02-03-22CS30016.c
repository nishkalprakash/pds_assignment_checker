#include<stdio.h>
#include<math.h>

int main()
{
    double x0, y0;
    double angle, theta, alpha, t;
    double xt, yt;
    double u;
    printf("Enter the initial coordinates of the particle : \n");
    scanf("%lf %lf", &x0, &y0);
    printf("Enter the angle made with X-axis : \n");
    scanf("%lf", &angle);
    printf("Enter the initial speed : \n");
    scanf("%lf", &u);
    printf("Enter the acceleration of the particle : \n");
    scanf("%lf", &alpha);
    printf("Enter the time : \n");
    scanf("%lf", &t);

    theta = (angle * M_PI) / 180.0;

    xt = x0 + cos(theta) * ( (u * t) + 0.5 * alpha * t * t );
    yt = y0 + sin(theta) * ( (u * t) + 0.5 * alpha * t * t );

    printf("The final coordinates of the particle are (%.2lf,%.2lf)", xt, yt);

    return 0;

}
