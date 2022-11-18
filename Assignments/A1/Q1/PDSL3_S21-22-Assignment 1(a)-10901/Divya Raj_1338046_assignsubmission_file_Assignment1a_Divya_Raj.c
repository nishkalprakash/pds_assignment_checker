/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>
int main()
{
    float a, u, alpha, time;
    printf("Enter the value of a, u, alpha in order: ");
    scanf("%f %f %f", &a, &u, &alpha);
    printf("Enter the time: ");
    scanf("%f", &time);
    printf("Distance = %f", a + (u*time + (alpha*time*time)/2));
    return 0;
}