#include<stdio.h>
int main()
{
    double a,u,alpha,t,d;
    printf("enter the value of a,u,alpha in the given order\n");
    scanf("%lf%lf%lf",&a,&u,&alpha);
    printf("enter the time t\n");
    scanf("%lf",&t);
    d=u*t+0.5*t*t*alpha+a;
    printf("DISTANCE FROM ORIGIN d=%lf",d);
    getch();
    return 0;

}
