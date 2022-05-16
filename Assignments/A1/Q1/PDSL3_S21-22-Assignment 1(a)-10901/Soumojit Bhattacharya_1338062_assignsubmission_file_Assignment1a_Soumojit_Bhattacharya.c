/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>


int main()
{
    double a,u,alpha,t,d;
    //accepting values of a,u and alpha
    printf("Enter the values of a,u,alpha in order:");
    scanf("%lf%lf%lf", &a,&u,&alpha);
    //accepting value of time
    printf("Enter the time:");
    scanf("%lf", &t);
    //computing distance
    d=(a+u*t+alpha*t*t/2);
    //printing distance
    printf("%lf", d);
return 0;
}