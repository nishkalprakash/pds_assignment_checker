#include<stdio.h>
#include<math.h>
int main()
{
float x0,y0,u,a,o,xt,yt,t ;
printf("enter x0\n");
scanf("%f",&x0);
printf("enter y0\n");
scanf("%f",&y0);
printf("enter u\n");
scanf("%f",&u);
printf("enter a\n");
scanf("%f",&a);
printf("enter o\n");
scanf("%f",&o);
printf("enter t\n");
scanf("%f",&t);

o= (M_PI*o)/180 ;
xt=(x0 +((u*cos(o))*t)+((cos(o)*a*t*t)/2)) ;
yt=(y0+(u*sin(o)*t)+((sin(o)*a*t*t)/2)) ;
printf("(%f,%f)",xt,yt);
return 0 ;
}
