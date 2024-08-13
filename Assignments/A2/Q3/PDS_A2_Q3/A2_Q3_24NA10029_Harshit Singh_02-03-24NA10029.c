#include<stdio.h>
#include<math.h>

int main()
{
 Double x0,y0,theta,u a,t,Xt,Yt,rad;
 printf("Enter the value of x0 =");
 scanf("%lf",&x0);
 printf("Enter the value of y0 =");
 scanf("%lf",&y0);
 printf("Enter the value of theta =");
 scanf("%lf",&theta);
 printf("Enter the value of u=");
 scanf("%lf",&u);
 printf("Enter the value of a=");
 scanf("%lf",&a);
 printf("Enter the value of t =");
 scanf("%lf",&t);
 
 
 rad = (theta*3.14)/180;
 
 Xt = x0 + u*cos(rad)*t + a*cos(rad)*t*t/2;
 Yt = yt + u*sin(rad)*t + a*sin(rad)*t*t/2;
 
 printf("the position of particle i Q(Xt,Yt) = (%lf,%lf) \n",Xt,Yt);
 return 0;
}
