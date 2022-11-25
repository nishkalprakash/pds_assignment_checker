#include<stdio.h>
#include<math.h>
int main()
{
double mu, ep, c,d;
printf("enter the value of mu:");
scanf("%lf",&mu);
printf("enter the value of ep;");
scanf("%lf",&ep);
printf("entered values of mu and ep are %lf and %lf", mu,ep);
d=sqrt(mu*ep);
c=pow(d,-1);
printf("speed of light c=%lf",c);


return 0;
}
