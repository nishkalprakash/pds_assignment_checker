#include<stdio.h>
#include<math.h>
int main()
{
    float x0,y0,theta,u,a,t,xt,yt,s;
    printf("x0 = ");
    scanf("%f",&x0);
    printf("y0 = ");
    scanf("%f",&y0);
    printf("theta = ");
    scanf("%f",&theta);
    printf("u = ");
    scanf("%f",&u);
    printf("a = ");
    scanf("%f",&a);
    printf("t = ");
    scanf("%f",&t);
    s = (u*t)+((a*(t*t))/2);
    xt = x0 + s*cos(theta*M_PI/180);
    yt = y0 + s*sin(theta*M_PI/180);
    printf("Q(Xt,Yt) = Q(%.2f,%.2f)\n",xt,yt);

return 0;
}
