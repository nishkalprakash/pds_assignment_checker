/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x; float e; int iteration;
    printf("x(0) = ");
    scanf("%f", &x);
    printf("e = "); 
    scanf("%f", &e);
    printf("maxIteration = ");
    scanf("%d", &iteration);
    float x1, f, f1, diff;
    for(int i=1; i<=iteration; i++)
    {
        f = x*x*x - 25;
        f1 = 3*x*x;
        x1 = x - f/f1;
        diff = x1-x;
        if(diff <0) diff = -diff;
        printf("Iteration : %d, x(0) : %f, x(1) : %f, Error : %f\n", i, x, x1, diff);
        if(diff < e)
        break;
        x = x1;

    }
    printf("The square root is %f", x1);
}