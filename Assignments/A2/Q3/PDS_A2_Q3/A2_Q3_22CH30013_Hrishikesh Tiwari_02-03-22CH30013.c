
#include<stdio.h>
#include<math.h>
int main()
{
    double x0,y0,u,theta,alpha,X,T,Y;
    printf("PLEASE INPUT x0 ,y0 ,u  , theta  ,alpha  TIME\n ");
    scanf("%lf %lf %lf %lf %lf",&x0,&y0,&u,&theta,&alpha);
   X=u*cos(theta)+(0.5*alpha*cos(theta)*T*T) ;
   Y=u*sin(theta)+(0.5*alpha*sin(theta)*T*T);
   printf("the final position is Q(X,Y)= (%lf,%lf) ",X,Y);
   return 0;
}
