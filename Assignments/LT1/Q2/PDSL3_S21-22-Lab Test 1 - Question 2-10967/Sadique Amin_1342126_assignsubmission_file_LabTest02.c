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
    float x0,e,x1,error;
    int maxIteration;
    printf("Input: ");
    scanf("x0 = %f, ε = %f, maxIteration = %d",&x0,&e,&maxIteration);
    //printf("x0=%f",x0);
    printf("Output: \n");
    printf("Iteration      x0                    x1                    Error\n");
    for(int i=1;i<=maxIteration;i++)
    {
        x1=x0-(((x0*x0*x0)-25.0)/(3.0*x0*x0));
        error=fabs(x1-x0);
        printf("%d              %f              %f              %f\n",i,x0,x1,error);
        if(error<e)
        {
            break;
        }
        x0=x1;
    }
    printf("The square root is %f",x1);
    return 0;
}
