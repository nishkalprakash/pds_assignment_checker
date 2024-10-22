// C Program to compute the coordinates of a particle moving in xy-plane with constant acceleration using the formula d = u*t + 0.5*a*t^2
// Code creator = Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#include <math.h>
int main()
{
    double x0, y0, theta, u, a, t;
    double xt, yt;
    double d;
    printf("x0 = ");
    scanf("%lf", &x0); // Input x0
    printf("y0 = ");
    scanf("%lf", &y0); // Input y0
    printf("theta = ");
    scanf("%lf", &theta); // Input theta as degrees
    // Convert theta to radians
    theta = theta * M_PI / 180;
    printf("u = ");
    scanf("%lf", &u); // Input u
    printf("a = ");
    scanf("%lf", &a); // Input a
    printf("t = ");
    scanf("%lf", &t);                        // Input t
    d = u * t + 0.5 * a * pow(t, 2);         // Computing d
    xt = x0 + d * cos(theta);                // Computing xt
    yt = y0 + d * sin(theta);                // Computing yt
    printf("Q(Xt,Yt) = Q(%.2lf,%.2lf)", xt, yt); // Printing the coordinates
}