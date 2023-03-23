#include<stdio.h>
#include<math.h>
int main()
{
   double x0,y0,u,t,angle,theta,a,Xt,Yt;
   printf("Enter the initial co-ordinates of the particle\n");
   scanf("%lf,%lf",&x0,&y0);
   printf("Enter the initial speed of particle\n");
   scanf("%lf",&u);
   printf("Enter the value of inclination of line along which particle is starting\n");
   scanf("%lf",&angle);
   printf("Enter the value of accleration of particle\n");
   scanf("%lf",&a);
   printf("Enter the time after which the poistion of P is to be calculated\n");
   scanf("%lf",&t);
   theta = (angle/180)*M_PI;
   Xt = x0 + (u*t + 0.5*a*t*t)*cos(theta);
   Yt = y0 + (u*t + 0.5*a*t*t)*sin(theta);
   printf("The co-ordinates of position of P after t seconds is %lf,%lf ",Xt,Yt);


}
