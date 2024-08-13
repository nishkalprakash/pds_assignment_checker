#include <stdio.h>
#include <math.h>

int main()
{
double x0;
double y0;
double th;
double u;
double a;
double t;
double xt;
double yt;

printf("Enter initial x coordinate: ");
scanf("%le", &x0);

printf("Enter initial y coordinate: ");
scanf("%le", &y0);

printf("Enter initial speed: ");
scanf("%le", &u);

printf("Enter acceleration: ");
scanf("%le", &a);

printf("Enter inclination w.r.t positive x axis: ");
scanf("%le", &th);

printf("Enter time elapsed: ");
scanf("%le", &t);

double rad;
rad = (th*((3.141592)/180));

yt = y0 + u*sin(rad)*t + (a*sin(rad)*t*t)/2;

xt = x0 + u*cos(rad)*t + (a*cos(rad)*t*t)/2;

printf("Q(Xt,Yt) = Q(%le,%le)" , xt , yt);

return 0;
}
