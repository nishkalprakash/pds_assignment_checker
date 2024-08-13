#include <stdio.h>
#include <math.h>
int main()
{
//u:initial speed,a:acceleration,t:time
float x0,y0,u,theota,a,xt,yt,t,th1;
printf("x0=\n" );
scanf("%f",&x0);
printf("y0=\n" );
scanf("%f",&y0);
printf("initial speed=\n" );
scanf("%f",&u);
printf("theota=\n" );
scanf("%f",&theota);
//th1: theota in radian
th1=3.14*theota/180;
printf("acceleration=\n" );
scanf("%f",&a);
printf("time=\n" );
scanf("%f",&t);
xt=u*cos(th1)*t;
yt=u*sin(th1)*t+ 0.5*a*t*t;
printf("P(xt,yt)= (%f,%f)",xt,yt);
return 0;
}
