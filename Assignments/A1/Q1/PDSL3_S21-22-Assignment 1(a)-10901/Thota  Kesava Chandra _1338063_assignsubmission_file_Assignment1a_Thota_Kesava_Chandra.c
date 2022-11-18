/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

int main()
{
    double t,d,a,u,alpha;

    printf("Enter the values of a, u, alpha in order: ");
    scanf("%f %f %f",&a,&u,&alpha);
    printf("Enter the time: ");
    scanf("%f",&t);
    //printf("a %f , u %f , alpha %f , t %f\n", a,u,alpha,t);
    d = a*1.0 + u*t*1.0 + (alpha*t*t)/2.0;
    printf("Distance: %f",d);
    return 0;
}
