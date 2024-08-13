 //program to compute the sum of the series
//code creater:vijayalayan v
//roll number:24NA10076
#include<stdio.h>
#include<math.h>
int main()                                                  
{
   float x0,y0,theta,u,a,t,xt,yt;
   printf("\nenter the value of x0,y0,theta,u,a,t\n");
   scanf("%f%f%f%f%f%f",&x0,&y0,&theta,&u,&a,&t);
   theta=theta*(M_PI/180);
   xt=x0+(u*cos(theta)*t)+(0.5*a*cos(theta)*t*t);
   yt=y0+(u*sin(theta)*t)+(0.5*a*sin(theta)*t*t);
   printf("Q(xt,yt)=Q(%f,%f)",xt,yt);
   return 0;
}
