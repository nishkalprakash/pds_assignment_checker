#include <stdio.h>
#include <stdlib.h>
/*
Name:Abani Kumar Jena
Roll no:21ME10100
*/
int main()
{
    int a,u,alpha;
    float t,d;
    printf("Enter the values of a, u, alpha in order\n");
    scanf("%d%d%d",&a,&u,&alpha);
    printf("Enter the time\n");
    scanf("%f",&t);
    d= a+u*t+0.5*alpha*t*t;
    printf("Distance traveled=%f ",t,d);
    return 0;
}

