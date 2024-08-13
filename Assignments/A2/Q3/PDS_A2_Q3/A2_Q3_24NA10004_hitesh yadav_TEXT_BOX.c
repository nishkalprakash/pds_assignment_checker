include <stdio.h>
#include <math.h>
int main()
{   float u,a,theta,theta1,x0=0,y0=0,t,x1,y1;
   //Taking values;
   printf("Enter the speed of particle");
   scanf("%f",&u);
   printf("Enter the accelration of particle");
   scanf("%f",&a);
   printf("Enter the theta at which particle s moving");
   scanf("%f",&theta);
   
   d = u*t+0.5a*t*t;
   x1=cos(theta)*u*t+0.5*a*cos(theta)*t*t;
   y1=sin(theta)*u*t+0.5*a*sin(theta)*t*t;
    
    return 0;
 }