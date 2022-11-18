/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i, n;
    double m, c, x[n], y[n];
    double sumY=0;
    double sumX=0;
    double numtor=0;
    double dentor=0;
    printf("Enter the no. of points:\n");
    scanf("%d", &n);
    printf("Enter the x coordinate values:\n");
    for(i=0;i<n;i++){
        scanf("%1f", &x[i]);
    }
    printf("Enter the y coordinate values\n");
    for(i=0;i<n;i++){
        scanf("%1f", &y[i]);
    }
    for(i=0;i<n;i++){
        sumX=sumX+x[i];
        sumY=sumY+y[i];
    }
    sumX=sumX/n;
    sumY=sumY/n;
    for(i=0;i<n;i++){
        numtor=numtor+(x[i]-sumX)*(y[i]-sumY);
        dentor=dentor+(x[i]-sumX)*(x[i]-sumX);
    }
    m=numtor/dentor;
    c=sumY-m*sumX;

    printf("The line equation is given by:\n");
    printf("y = %1f x + %1f", m, c);
    return 0;
}






