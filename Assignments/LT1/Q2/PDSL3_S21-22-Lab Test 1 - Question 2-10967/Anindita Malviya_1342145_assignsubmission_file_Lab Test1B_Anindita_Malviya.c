/*
Anindita Malviya
21MI33004
Section3
Code blocks
Assignment 2 a
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float f,x,xo,xi,error,i = 0,maxi,e;
    printf("Enter xo = ");
    scanf("%f",&xo);
    printf("e = ");
    scanf("%f",&e);
    printf("max Iteration = ");
    scanf("%f",&maxi);

    do
    {
        i++;
        printf("Iteration = %f, xo = %f",i,xo);
        f = xo*xo*xo -25;
        error = f/(3*xo*xo);
        xi = xo - error;
        xo = xi;
        printf("xi = %f, error = %f\n",xi,error);
    }
    while ( error > e && i < maxi);

    printf("Square root is %f\n",xo);

}
