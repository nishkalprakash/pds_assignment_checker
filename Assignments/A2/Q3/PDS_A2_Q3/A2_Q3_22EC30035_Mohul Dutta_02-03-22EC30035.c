#include<stdio.h>//including the library
#include<math.h>
int main(){
    double x0,y0,theta,u,a,t;//declaring the variable
    printf("x0 = ");//taking input of x0 and similarly for others
    scanf("%lf",&x0);
    printf("y0 = ");
    scanf("%lf",&y0);
    printf("theta = ");
    scanf("%lf",&theta);
    printf("u = ");
    scanf("%lf",&u);
    printf("a = ");
    scanf("%lf",&a);
    printf("t = ");
    scanf("%lf",&t);

    double t2=(M_PI)*theta/180.0;//making it into radians

    double xt=x0+(u*cos(t2)*t+0.5*a*cos(t2)*t*t);//evaluating the expression
    double yt=y0+u*sin(t2)*t+0.5*a*sin(t2)*t*t;// evaluating the 2nd expression
    printf("Q(Xt,Yt) = Q(%0.2lf,%0.2lf)",xt,yt);//printing
    return 0;
}