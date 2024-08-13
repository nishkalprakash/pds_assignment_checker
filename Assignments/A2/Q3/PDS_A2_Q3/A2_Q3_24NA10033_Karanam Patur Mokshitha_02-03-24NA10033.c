#include<stdio.h>
#include<math.h>
int main ()  {
      float x0,y0,theta,u,a,t,xt,yt,s,x,y;
      printf("Enter the value of x0:");
      scanf("%f",&x0);
      printf("Enter the value of y0:");
      scanf("%f",&y0);
      printf("Enter the value of theta:");
      scanf("%f",&theta);
      printf("Enter the value of u:");
      scanf("%f",&u);
      printf("Enter the value of t:");
      scanf("%f",&t);
      s=u+a*t*t/2;
      scanf("%f",&s);
      x=s*sintheta;
      scanf("%f",&x);
      y=s*costheta;
      scanf("%f",&y);
      xt=x0+y;
      yt=y0+x;
      scanf("%f%f",&xt,&yt);
      printf("value of xt and yt are %f and %f",xt,yt)
      return 0;
   }
      
      
      
