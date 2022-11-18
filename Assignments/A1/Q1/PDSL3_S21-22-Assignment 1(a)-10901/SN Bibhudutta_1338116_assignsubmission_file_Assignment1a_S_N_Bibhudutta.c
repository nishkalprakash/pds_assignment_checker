// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 1

#include<stdio.h>

#include<math.h>

int main()
{
    float a,u,alpha,t,d;

    printf("The intial postion of the particle is: \n");
    scanf("%f", &a);
    printf("The initial velocity of the particle is: \n");
    scanf("%f", &u);
    printf("The acceleration of the particle is: \n");
    scanf("%f", &alpha);
    printf("The time for which the particle travels is: \n");
    scanf("%f", &t);

    d = ((u*t) + (1/2.0)*(alpha)*(pow(t,2.0)) + a);

    printf("The total distance travelled by the particle from (0,0) is %f \n", d);

    return 0;

}