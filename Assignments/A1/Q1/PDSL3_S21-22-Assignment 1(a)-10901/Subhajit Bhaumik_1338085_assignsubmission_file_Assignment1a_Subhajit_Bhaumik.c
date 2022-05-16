#include<stdio.h>
int main()
{
    float a,u,alpha,t,Distance;
    printf("Enter the values of a,u,alpha in order:");
    scanf("%f%f%f",&a,&u,&alpha);
    printf("Enter the time:");
    scanf("%f",&t);
    Distance=a+u*t+0.5*alpha*t*t;
    printf("Distance=%f",Distance);
    return 0;
}
