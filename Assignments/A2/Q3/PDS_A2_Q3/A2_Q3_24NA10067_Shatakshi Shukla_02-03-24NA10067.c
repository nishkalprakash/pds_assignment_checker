#include <stdio.h>
#include <math.h>

int main()
{
   double x,y,u,theta,a,t;
   double Qx,Qy;
   
   printf("PRINT THE VALUES OF POSITION IN X:\n");
   scanf("%lf",&x);
   printf("PRINT THE VALUES OF POSITION IN Y:\n");
   scanf("%lf",&y);
   printf("PRINT THE VALUE OF initial speed:\n");
   scanf("%lf",&u);
   printf("PRINT THE VALUE OF theta:\n");
   scanf("%lf",&theta);
   printf("PRINT THE VALUE OF a:\n");
   scanf("%lf",&a);
   printf("PRINT THE VALUEe OF t:\n");
   scanf("%lf",&t);
   Qx=u * sin(theta * ((M_PI)/180)) + 0.5*a*sin(theta*((M_PI)/180))*pow(t,2);// to calculate x position
   Qy=u*cos(theta*((M_PI)/180))+0.5*a*cos(theta*((M_PI)/180))*pow(t,2); //to calculate y position
   printf("\nTHE POSITION OF PARTICLE IS: %lf %lf\n",Qx,Qy);
}
   
   
      
   
