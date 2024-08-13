#include <stdio.h>
#include <math.h>

int main(){
float x,y,u,o,a,t,Xt,Yt,c,s;

printf("x0=\n");
scanf("%f",&x);

printf("y0=\n");
scanf("%f",&y);

printf("u=\n");
scanf("%f",&u);

printf("theta=\n");
scanf("%f",&o);

printf("a=\n");
scanf("%f",&a);

printf("t=\n");
scanf("%f",&t);

c=o*M_PI/180;

Xt= u*cos(c)*t+(1/2)*a*cos(c)*pow(t,2)+x;
Yt= u*sin(c)*t+(1/2)*a*sin(c)*pow(t,2)+y;
 
 printf("Q(%le,%le)",Xt,Yt);
 
return 0;
}
