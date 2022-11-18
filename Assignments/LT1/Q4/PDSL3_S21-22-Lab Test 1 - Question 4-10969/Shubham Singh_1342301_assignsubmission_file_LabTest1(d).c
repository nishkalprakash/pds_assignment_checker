/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 1(d)
*/

#include <stdio.h>
int main (){
    int X[100],Y[100];
    int n;
    printf("Enter the number of coordinates you want to enter : ");
    scanf("%d", &n);
    printf("Enter x-coordinates: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    printf("Enter y-coordinates: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Y[i]);
    }
    printf("\n x -coordinates: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",X[i]);
    }
    printf("\n y -coordinates: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",Y[i]);
    }
    //Calculating the mean values of x
    float sum = 0,avgx,avgy;
    for (int i = 0; i < n; i++)
    {
        sum = sum + X[i];
    }
    avgx = sum/n;
    //Calculating the mean values of xy
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +Y[i];
    }
    avgy = sum/n;
    //Computing slope
    float m,sumd=0,sumn=0;
    for (int i = 0; i < n; i++)
    {
        sumn = sumn + (X[i] - avgx) * (Y[i] - avgy);
        sumd = sumd + (X[i] - avgx) * (X[i] - avgx);
    }
    m = sumn/sumd;
    //Computing y-intercept
    float b ;
    b = avgy - m * avgx;
    //Printing the outputs
    printf("\nm = %0.1f , b = %0.1f",m,b);

    //Forming the equation of line and printing it
    if (b>0)
    printf("  , Line equation y = %0.1fx + %0.1f",m,b);
    else if  (b<0)
    printf("  , Line equation y = %0.1fx  %0.1f",m,b);
    else
    printf("  , Line equation y = %0.1fx",m);


    return 0;
}




