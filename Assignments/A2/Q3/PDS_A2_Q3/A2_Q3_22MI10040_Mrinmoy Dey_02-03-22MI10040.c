#include <stdio.h>
#include <math.h>
int main(){
    float u,xt,yt,rad,theta,x0,y0,a,t;
    printf("x0 = ");
    scanf("%f",&x0);
    printf("y0 = ");
    scanf("%f",&y0);
    printf("theta = ");
    scanf("%f",&theta);
    printf("u = ");
    scanf("%f",&u);
    printf("a = ");
    scanf("%f",&a);
    printf("t = ");
    scanf("%f",&t);
    rad = (theta*M_PI)/180;
    xt = x0 + (u*cos(rad))*t + (0.5*(a*cos(rad))*pow(t,2));
    yt = y0 + (u*sin(rad))*t + (0.5*(a*sin(rad))*pow(t,2));
    printf("Q(xt,yt) = Q(%.2f,%.2f)",xt,yt);
    return 0;
}
