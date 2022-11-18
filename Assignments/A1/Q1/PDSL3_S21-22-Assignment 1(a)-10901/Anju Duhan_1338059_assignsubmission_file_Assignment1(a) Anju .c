#include<stdio.h>
main()
{
    int a,u,alpha;
    float t,d;
printf("enter value of a,u,alpha: ");
scanf("%d %d %d",&a, &u, &alpha);
printf("Enter the time: ");
scanf("%f",&t);
d=a+u*t+alpha*t*t/2;
printf("Distance= %f",d);
}
