#include <stdio.h>
#include <math.h>

int main()
{
    float x0, y0, P, a, t, u, xt, yt, s;

    // Here, P stands for the angle theta and s is the displacement of the particle

    printf("Enter the values of x0, y0, P, u, a, t\n");
    scanf("%f %f %f %f %f %f", &x0, &y0, &P, &u, &a, &t);

    s = u*t + a*t*t/2;

    xt = x0 + s*cos(M_PI*P/180);
    yt = x0 + s*sin(M_PI*P/180);

    printf("The final point is P(%f, %f)", xt, yt);

    return 0;


}
