#include <stdio.h>
#include<math.h>
void main()
{
double x0,y0,theta,u,a,t,d,Xt,Yt;
scanf("%lf",&x0);
scanf("%lf",&y0);
scanf("%lf",&theta);
scanf("%lf",&u);
scanf("%lf",&a);
scanf("%lf",&t);
d=u*t+a*pow(t,2)/2;
Xt=x0+d*cos(theta*(M_PI)/180);
Yt=y0+d*sin(theta*(M_PI)/180);
printf("Q(Xt,Yt)=Q(%lf,%lf)",Xt,Yt);
/* test cases:
1.


x0 = 0

y0 = 0

theta = 45 

u = 1.41421356237

a = 0

t = 1


Q(Xt,Yt) = Q(1.00,1.00)

2.


x0 = 10

y0 = 10

theta = 90

u = 10

a = 0

t = 10


Q(Xt,Yt) = Q(10.00,110.00)

3.


x0 = 0

y0 = 0

theta = 0

u = 10

a = 10

t = 1


Q(Xt,Yt) = Q(15.00,0.00)

4.


x0 = 0

y0 = 0

theta = 45

u = 10

a = 10

t = 10


Q(Xt,Yt) = Q(424.26,424.26)*/

}
