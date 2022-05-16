#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,u,alpha,t,dis,s;
    printf("Enter the values of a,u,alpha in order:");
    scanf("%f%f%f",&a,&u,&alpha);
    printf("enter the time:");
    scanf("%f",&t);
    s=u*t+((0.5)*alpha*t*t);
    dis=(s+a);
    printf("Distance:%f",dis);
    return 0;
}
