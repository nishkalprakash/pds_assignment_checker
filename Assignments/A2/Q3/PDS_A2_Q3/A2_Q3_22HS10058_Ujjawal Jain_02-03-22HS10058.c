#include<stdio.h>
#include<math.h>
int main()
{
double x0,y0,theta,u,a,t,xt,yt;
printf("x0 : ");
scanf("%lf",&x0);
printf("y0 : ");
scanf("%lf",&y0);
printf("theta : ");
scanf("%lf",&theta);
printf("u : ");
scanf("%lf",&u);
printf("a : ");
scanf("%lf",&a);
printf("t : ");
scanf("%lf",&t);
xt = x0 + (u*t + a*t*t/2)*cos(theta*M_PI/180);
yt = y0 + (u*t + a*t*t/2)*sin(theta*M_PI/180);
printf("xt = %lf\n",xt);
printf("yt = %lf",yt);
return 0;
}
