/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>, <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,u,alpha,t,d;                                    //Initializing the variables
    printf("Enter the values of a, u, alpha in order: ");
    scanf("%f%f%f",&a,&u,&alpha);                           //Taking input from the user
    printf("Enter the time: ");
    scanf("%f",&t);
    d=a+u*t+(alpha*t*t)/2;                                  //Calculating the distance
    printf("Distance = %f",fabs(d));                        //Printing the absolute value
    return 0;
}