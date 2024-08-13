//program to calculate final position
//code creater: Debojyoti Das
//roll no: 24NA10022

#include<stdio.h>
#include<math.h>
int main()
    {  
       double x0,y0,theta,u,a,t,xt,yt;
       printf(" Enter values of x0,y0,theta,u,a,t: \n");
       scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&theta,&u,&a,&t);
       xt=x0+u*cos(theta*(M_PI)/180)*t + a*cos(theta*(M_PI)/180)*t*t/2;
       yt=y0+u*sin(theta*(M_PI)/180)*t + a*sin(theta*(M_PI)/180)*t*t/2;
       printf("\n the final positon is (%lf,%lf)",xt,yt);
       
     }
