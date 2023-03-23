#include <stdio.h>
#include <math.h>

int main() {
double x0, y0, Theta, u, a, t, xt, yt, s;
printf("x0=");
scanf("%lf", &x0);
printf("y0=");
scanf("%lf", &y0);
printf("Theta=");
scanf("%lf", &Theta);
printf("u=");
scanf("%lf", &u);
printf("a=");
scanf("%lf", &a);
printf("t=");
scanf("%lf", &t);
s = ( u * t ) + (0.5 * a * t * t);
xt = x0 + s * cos((M_PI/180.0) * Theta);
yt = y0 + s * sin((M_PI/180.0) * Theta);
printf("Q(xt,yt)=Q(%0.2f %0.2f)", xt,yt);
return 0;
}

//i took an extra variable s to calculate the distance so that i can use its vertical (sin component) and horizontal (cos component) to compute yt and xt respectively
//and i used 0.2f for the final coordinates output so that it cant go beyond 2 decimal places as stated in the question


