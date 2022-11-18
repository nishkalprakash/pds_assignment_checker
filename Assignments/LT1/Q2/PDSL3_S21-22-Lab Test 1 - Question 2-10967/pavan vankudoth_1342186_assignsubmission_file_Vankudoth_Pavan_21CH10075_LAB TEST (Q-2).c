/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x,E,error;
    int i,maxit;
    printf("x0= ");
    scanf("%f",&x);
    printf("E= ");
    scanf("%f",&E);
    printf("Max Iterations = ");
    scanf("%f",&maxit);
    i=0,error=E;
    printf("Iteration  x0      x1     Error\n");
    while (i<maxit && error>=E){
        printf("    %d   %f",i++,x);
        error=x;
        x-=(((pow(x,3)-25)/pow(x,2)))/3.0;
        error-=x;
        printf("   %f   %f\n",error);
    }
    printf("The square root is %f",x);
}
