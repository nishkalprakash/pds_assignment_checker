#include<stdio.h>
#include<math.h>
int main()
{
int x0;
printf("enter x0");
scanf("%d", &x0);
int y0;
printf("enter y0");
scanf("%d", &y0);
double u;
printf("enter u");
scanf("%lf", &u);
int theta;
printf("enter theta");
scanf("%d", &theta);
int alpha;
printf("enter alpha");
scanf("%d", &alpha);
int t;
printf("enter t");
scanf("%d",&t);
float t1= (M_PI*theta)/180;

double xt,yt;
xt=x0+u*cos(t1)+0.5*alpha*t*t*cos(t1);

yt=y0+u*sin(t1)+0.5*alpha*t*t*sin(t1);

printf("Q(%lf,%lf)=Q(xt,yt)",xt,yt);

return 0;

}
