#include <stdio.h>
#include<math.h>
/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/

int main()
{
    float a,u,alpha;
    printf("enter the values of a,u,alpha in order:");
    scanf("%f%f%f",&a,&u,&alpha);
    float d,t;//t is the time in seconds,d is the distance from origin
    printf("enter time: ");
    scanf("%f",&t);
    d=a+u*t+(alpha*pow(t,2))/2;
    printf("Distance= %f",d);
    return 0;

}
