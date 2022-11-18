/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
float main()
{
    float a, u, alpha, t, distance;
    printf("Enter the values of a, u, alpha in order\n");
    scanf("%f%f%f", &a, &u, &alpha);
    printf("Enter the time\n");
    scanf("%f", &t);

    distance = u*t + 0.5*alpha*t*t + a;

    printf("The distance is %f", distance);
    return 0;
}
