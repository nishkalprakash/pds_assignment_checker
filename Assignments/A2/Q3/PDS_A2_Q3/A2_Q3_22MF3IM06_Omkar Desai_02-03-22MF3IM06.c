#include<stdio.h>
#include<math.h>
int main(){
float X0,Y0,theta,u,a,t,Xt,Yt,R,radian;
printf("Enter the value of X0, Y0, theta, u,a,t with space between them\n");
scanf("%f%f%f%f%f%f",&X0,&Y0,&theta,&u,&a,&t);
R= u*t+0.5*a*t*t;
radian= theta*(M_PI)/180;
Xt=R*cos(radian) +X0;
Yt=R*sin(radian) +Y0;
printf("Xt is %f\n", Xt);
printf("Yt is %f\n",Yt);
return 0;
}
