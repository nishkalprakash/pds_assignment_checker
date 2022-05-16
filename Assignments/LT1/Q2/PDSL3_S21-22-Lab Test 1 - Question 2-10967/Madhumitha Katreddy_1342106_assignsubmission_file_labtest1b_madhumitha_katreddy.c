#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x0,maxit,e,error=0;
    int i=0;
    printf("Enter the value of X:");
    scanf("%f",&x0);
    printf("Enter the value of e:");
    scanf("%f",&e);
    printf("Enter maxIteration:");
    scanf("%f",&maxit);
    printf("Iteration\tX0\tX1\tError");
    float x1;
    while (error <e || i<maxit)
    {
        x1=(x0-(x0*x0*x0-25)/(3*x0*x0));
        error=x1-x0;
        printf("%d\t%f\t%f\t%f\n",i+1,x0,x1,error);
        x1=x0;
        i++;
    }
    printf("The Square root is %f\n",x1);
    return 0;
}
