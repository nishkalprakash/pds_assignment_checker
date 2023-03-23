#include<stdio.h>
#include<math.h>
int main(){
float x0,y0,theta,a,u,xt,yt,rad,t;
printf("x0 :");
scanf("%f",&x0);
printf("y0 :");
scanf("%f",&y0);
printf("theta :");
scanf("%f",&theta);
rad=theta*(M_PI)/180;
printf("u: ");
scanf("%f",&u);
printf("a :");
scanf("%f",&a);
printf("t: ");
scanf("%f",&t);
xt=x0+((u*cos(rad)*t)+(0.5*a*cos(rad)*t*t));
yt=y0+((u*sin(rad)*t)+(0.5*a*sin(rad)*t*t));
printf("xt: %f",xt);
printf("\nyt: %f",yt);
return 0;
}
