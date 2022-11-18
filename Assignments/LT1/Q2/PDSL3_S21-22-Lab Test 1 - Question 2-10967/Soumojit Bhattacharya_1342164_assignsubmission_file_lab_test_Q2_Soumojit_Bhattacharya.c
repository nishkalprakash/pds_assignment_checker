/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>

int main()
{
    int maxIter,i=0;
    double x0,x1,tolerance,error;
    printf("x0= ");
    scanf("%lf",&x0);
    printf("tolerance limit= ");
    scanf("%lf",&tolerance);
    printf("maxIteration= ");
    scanf("%d",&maxIter);
    printf("Iteration     x0        x1       Error\n");
    do
    {
        x1=x0-(x0*x0*x0-25)/(3*x0*x0);
        if(x1>x0)
        error=x1-x0;
        else
        error=x0-x1;
        printf("    %d      %lf  %lf  %lf\n", i+1, x0, x1, error);
        x0=x1;
        i++;
    }
    while(i<maxIter&&error>tolerance);
    printf("The square root is %lf", x0);
    printf("\n");
    
    return 0;
}