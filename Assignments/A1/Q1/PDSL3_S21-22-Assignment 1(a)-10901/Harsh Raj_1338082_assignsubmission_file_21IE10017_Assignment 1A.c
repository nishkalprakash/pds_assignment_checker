#include<stdio.h>
int main()
{
    float x,a,u,alpha,d,t;
    printf("Enter the value of a,u,alpha and t.\n");
    scanf("%f%f%f%f",&a,&u,&alpha,&t);
    x=u*t+(a*t*t/2);
    d=x+a;
    printf("Distance from origin is %f",d);
    return 0;
}
