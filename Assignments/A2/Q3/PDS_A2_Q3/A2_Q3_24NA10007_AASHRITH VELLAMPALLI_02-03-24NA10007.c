#include<stdio.h>
#include<math.h>
int main() 
{
double X0,Y0,u,a,theta,t,Yt,Xt,angle;
printf("enter values of X0,Y0,u,a,theta,t");
scanf("%lf%lf%lf%lf%lf%lf",&X0,&Y0,&u,&a,&theta,&t);
angle = (theta*M_PI)/180;// converting degrees to radian
Yt= Y0 + u*sin(angle)*t + 0.5*a*sin(angle)*t*t;// for x coordinate
Xt= X0 + u*cos(angle)*t + 0.5*a*cos(angle)*t*t;// for y coordinate
printf("the coordinates of particle after %lf seconds is (%lf,%lf)" ,t,Xt,Yt);
return(0);
} 


