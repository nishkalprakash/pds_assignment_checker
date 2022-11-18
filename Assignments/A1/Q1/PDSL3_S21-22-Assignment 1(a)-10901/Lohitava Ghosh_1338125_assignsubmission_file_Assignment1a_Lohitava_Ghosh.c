/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    float a,u,alpha,t,d;
    printf("Enter the values of a,u,alpha in order: ");
    scanf("%f%f%f",&a,&u,&alpha);
    printf("Enter the time: ");
    scanf("%f",&t);
    d=(u*t)+(0.5*alpha*t*t)+a;
    printf("Distance = %f",d);

    return 0;
}
