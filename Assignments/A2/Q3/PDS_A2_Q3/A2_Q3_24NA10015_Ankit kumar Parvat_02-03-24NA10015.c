#include<stdio.h>
#include<math.h>
//  24NA10015 Ankit Kumar parvat
int main()
{
   int x0,y0,theta,u,a,t;
   float theta2;
   float x1,y1;// final position
   printf("\n Emter the starting point");
   scanf("%d%d",&x0,&y0);// input from user
   printf("\n Enter the theta in degrees");
   scanf("%d",&theta);// input from user
   printf("\n Enter the initial speed u");
   scanf("%d",&u);// input from user
   printf("\n Enter the acceleration a");
   scanf("%d",&a);// input from user
   printf("\n Enter the time t");
   scanf("%d",&t);// input from user
   theta2=((M_PI)/180)*theta;// converting theta into radian
   x1=x0+(u*cos(theta2)*t)+((1/2)*a*cos(theta2)*pow(t,2));
   y1=y0+(u*sin(theta2)*t)+((1/2)*a*sin(theta2)*pow(t,2));
   printf("Q(x1,y1)=Q(%f,%f)",x1,y1);
   return 0;
}   
   
