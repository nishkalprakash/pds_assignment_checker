//This program is used to find the positon of point
//Code creator:Madhav Gupta
//Roll no. : 24NA10038
#include<stdio.h>
#include<math.h>
int main()
{
double x, y, u, o, a, xt, yt, t;
printf("What is %lf/n", x);
scanf("%lf", &x);
printf("What is %lf/n", y);
scanf("%lf", &y);
printf("What is %lf/n", u);
scanf("%lf", &u);
printf("What is %lf/n", o);
scanf("%lf", &o);
printf("What is %lf/n", a);
scanf("%lf", &a);//gives all user input
printf("What is %lf/n", t);
scanf("%lf", &t);
xt = x+u*cos(o*M_PI/180)*t+0.5*a*cos(o*M_PI/180)*t;
yt = y+u*sin(o*M_PI/180)*t+0.5*a*sin(o*M_PI/180)*t;
scanf("%lf, %lf", &xt, &yt);
printf("This is the new point Q %lf %lf", &xt, &yt);
}
