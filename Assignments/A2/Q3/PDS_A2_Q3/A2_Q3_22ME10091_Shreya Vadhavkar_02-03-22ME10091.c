#include<stdio.h>
#include<math.h>
int main()
{

    float x0, y0, theta, u, a, t, xt, yt, ux, uy, ax, ay;
    printf("x0 =");
    scanf("%f", &x0);/*Input initial x coordinate*/
    printf("y0 =");
    scanf("%f", &y0);/*input initial y coordinate*/
    printf("theta = ");
    scanf("%f", &theta);/*input angle*/
    printf("u =");
    scanf("%f", &u);/*input initial velocity*/
    printf("a =");
    scanf("%f", &a);/*input acceleration*/
    printf("t =");
    scanf("%f", &t);/*input time*/
    ux = u*cos(theta*3.14/180);/*compute initial horizontal velocity*/
    uy = u*sin(theta*3.14/180);/* compute initial vertical velocity*/
    ax = a*cos(theta*3.14/180);/*compute horizontal acceleration*/
    ay = a*sin(theta*3.14/180);/*compute vertical acceleration*/
    xt = x0 + ux*t + (ax*t*t/2);/*compute final x co-ordinate using the formula*/
    yt = y0 + uy*t + (ay*t*t/2);/*compute final y co-ordinate using the formula*/
    printf("Q(xt,yt) = Q(%f, %f)", xt, yt);/*display final co-ordinates*/
    return 0;
}
