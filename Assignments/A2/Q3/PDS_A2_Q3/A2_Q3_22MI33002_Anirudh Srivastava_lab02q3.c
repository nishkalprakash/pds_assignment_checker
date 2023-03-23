#include<stdio.h>
#include<math.h>

int main()
{
float x,y,u,theta,alpha,t,Xt,Yt;
printf ("enter the value of x");
scanf("%f", &x);
printf ("enter the value of y");
scanf("%f", &y);
printf ("enter the value of theta");
scanf("%f", &theta);
printf ("enter the value of alpha");
scanf("%f", &alpha);
printf ("enter the value of t");
scanf("%f", &t);
printf ("enter value of u");
scanf("%f", &u);

Xt= x + (u*t + 0.5*alpha*t*t)*cos(theta*(M_PI/180));
Yt= y + (u*t + 0.5*alpha*t*t)*sin(theta*(M_PI/180));
printf ("the value of Xt is %f and the value of Yt is %f", Xt , Yt);
return 0;
}
