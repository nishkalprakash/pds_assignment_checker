#include <stdio.h>
#include <math.h>
int main()
   {
       int x,y,th,a;
       int t;
       float u;
       int xt,yt;
       printf("x0=");
       scanf("%d",&x);
       printf("y0=");
       scanf("%d",&y);
       printf("theta=");
       scanf("%d",&th);
       printf("u=");
       scanf("%f",&u);
       printf("a=");
       scanf("%d",&a);
       printf("t=");
       scanf("%d",&t);
       xt=x+sin(th);
       yt=y+cos(th);
       printf("Q(Xt,Yt)= Q(%d, %d)", xt, yt);
       return 0;
    }
       
       
       
