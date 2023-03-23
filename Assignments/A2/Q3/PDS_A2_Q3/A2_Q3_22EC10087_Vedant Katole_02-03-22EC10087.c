#include <stdio.h>
#include <math.h>

int main(){
float x0, y0, u, theta, a, t, xt, yt;

printf("x0 = ");
scanf("%f", &x0);

printf("\ny0 = ");
scanf("%f", &y0);

printf("\ntheta = ");
scanf("%f", &theta);

printf("\nu = ");
scanf("%f", &u);

printf("\na = ");
scanf("%f", &a);

printf("\nt = ");
scanf("%f", &t);

xt = x0 + u * cos(theta * M_PI / 180) * t + 0.5 * a * cos(theta * M_PI / 180) * t * t;
yt = y0 + u * sin(theta * M_PI / 180) * t + 0.5 * a * sin(theta * M_PI / 180) * t *t;

printf("Q(Xt, Yt) = Q(%.02f, %.02f)", xt, yt);
return 0;
}
