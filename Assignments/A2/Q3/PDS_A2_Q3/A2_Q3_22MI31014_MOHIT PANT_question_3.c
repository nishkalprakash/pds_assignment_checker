

#include<stdio.h>
#include <math.h>
int main(){
    double x0,y0,x1,u,y1,th,a,t;
    printf("x0");
    scanf("%lf",&x0);
    printf("y0");
    scanf("%lf",&y0);
    printf("theta");
    scanf("%lf",&th);
    printf("u");
    scanf("%lf",&u);
    printf("alpha");
    scanf("%lf",&a);
    printf("t");
    scanf("%lf",&t);
    x1=((u*t)+((a*t*t)/2))*cos((th*(M_PI))/180);
    y1=((u*t)+((a*t*t)/2))*sin((th*(M_PI))/180);

    printf("Q(xt,yt)=(%lf,%lf)",x1,y1);


return 0;
}
