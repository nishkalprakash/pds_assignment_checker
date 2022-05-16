/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>,<stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int m,d,n;                                      //Initializing variables
    printf("Enter the number of machines: ");
    scanf("%d",&m);
    //printf("\n");
    printf("Enter the day number (1-7): ");
    scanf("%d",&d);
    //printf("\n");

    switch(d)                                       //Using switch case
    {
        case 1:
            n=m;
            break;
        case 2:
            n=round(m+m/2.0+m/4.0);
            break;
        case 3:
        case 6:
            printf("Enter no. of machines under inspection: ");
            int k;
            scanf("%d",&k);
            n=round(m-k+(m-k)/2.0 + (m-k)/4.0);
            break;
        case 4:
        case 5:
            printf("Enter boosting fraction: ");
            float f;
            scanf("%f",&f);
            n=round(m*(1+f));
            break;
        default:
            printf("Invalid input");
    }
    printf("Number of manufactured cars = %d",n);
    return 0;
}