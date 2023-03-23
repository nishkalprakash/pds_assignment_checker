
#include <stdio.h>
#include <math.h>
int main(){
double x0, y0, u, theta, a, xt, yt, t; // Declaring the required variables
double rad;
printf("x0=");
scanf("%lf",&x0); //to accept the value of x0 from the user
printf("y0=");
scanf("%lf",&y0); //to accept the value of y0 from the user
printf("theta=");
scanf("%lf",&theta); //to accept the value of theta from the user
printf("u=");
scanf("%lf",&u); //to accept the value of u from the user
printf("a=");
scanf("%lf",&a); // to accept the value of a from the user
printf("t=");
scanf("%lf",&t); // to accept the value of t from the user
rad= theta*(M_PI/180.0); // to convert the angle unit from degrees to radians
xt= x0+(u*cos(rad)*t)+(0.5*a*cos(rad)*t*t);
yt= x0+(u*sin(rad)*t)+(0.5*a*sin(rad)*t*t);
printf("Q(Xt,Yt) = Q(%lf,%lf)\n",xt,yt);
return 0;
}
