/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 1(a)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a,u,alpha,d,t ;
    printf("Enter the value of a :"); // (a,0) is point on x-axis so value of x-coordinate is enough //
    scanf("%f",&a);
    printf("Enter the value of u :"); //Initial speed - u //
    scanf("%f",&u);
    printf("Enter the value of alpha :"); // acceleration - alpha //
    scanf("%f",&alpha);
    printf("Enter the time :");
    scanf("%f",&t);
    d = ((u*t)+0.5*alpha*t*t)+a ;
    printf("The distance of the particle from origin is : %f units",d);
    return 0;
}
