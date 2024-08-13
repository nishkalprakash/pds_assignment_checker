#include<stdio.h>
#include<math.h>
int main()
{
 double x,y,u,t,a,agc,xt,yt,time;
 //defining and calling variables from user 
 printf("Enter the values of x:");
 scanf("%lf",&x);
 printf("Enter the values of y:");
 scanf("%lf",&y);
 printf("Enter the values of u:");
 scanf("%lf",&u);
 printf("Enter the values of a:");
 scanf("%lf",&a);
 printf("Enter the values of t:");
 scanf("%lf",&t);
 printf("Enter the values of time:");
 scanf("%lf",&time);
 //angle conversion below
 agc=(t*(M_PI))/180;
 //mathematical formula for computation
 xt=x*cos(agc)*time + (0.5*a*cos(agc)*time);
 yt=y*sin(agc)*time + (0.5*a*sin(agc)*time);
 //return of output
 printf("the position at time %lf,is (%lf,%lf)",time,xt,yt);
 return 0;
 }
