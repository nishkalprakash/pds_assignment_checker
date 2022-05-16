#include<stdio.h>
int main()
{
    int a,u,alpha;
    float d,t;
    printf("enter the values of a,u,alpha,t");
    scanf("%d %d %d %f",&a,&u,&alpha,&t);
    //printf("enter the value of time");
    //scanf("%lf,&t");
    d=(a+(u*t+(alpha*t*t)/2));
    printf("the distance from origin is %f",d);
    return 0;
}
