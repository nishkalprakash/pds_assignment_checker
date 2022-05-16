#include<stdio.h>
int main()
{
    float a,u,z,t,s,d;
    printf("enter the values of a,u,alpha in order");
    scanf("%f%f%f",&a,&u,&z);
    printf("enter the time in seconds");
    scanf("%f",&t);
    s=(u*t)+(0.5*(z)*t*t);
    d=a+s;
    printf("distance from origin 'd' = %f",d);
    return 0;
}