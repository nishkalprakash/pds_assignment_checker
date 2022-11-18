/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,u,alpha;
    float t,dist;
    printf("Enter the values of a,u,alpha in order: ");
    scanf("%d %d %d",&a,&u,&alpha);
    printf("Enter the time: ");
    scanf("%f",&t);

    dist= (u*t + 0.5*alpha*t*t) + a;

    printf("Distance = %0.6f\n",dist);

}
