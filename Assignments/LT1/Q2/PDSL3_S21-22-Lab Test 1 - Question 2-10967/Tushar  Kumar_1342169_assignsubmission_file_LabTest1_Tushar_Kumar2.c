/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    double x,max_it,ep;
    printf("Enter the initial value of x:");
    scanf("%lf",&x);
    printf("Enter the value of epsylon:");
    scanf("%lf",&ep);
    printf("Enter the max number of iteration:");
    scanf("%lf",&max_it);

    double x_n;

    x_n=(((2.0*x)/3)+(25.0/(3*x*x)));
    double err=x-x_n;
    printf("Iteration\t\tx0\t\tx1\t\tError\n");
    for(int i=0;i<max_it;i++)
    {
        printf("%d\t\t%lf\t\t%lf\t\t%lf\n",(i+1),x,x_n,err);
        if(err<ep)break;
        x=x_n;
        x_n=(((2.0*x)/3)+(25.0/(3*x*x)));
        err=x-x_n;
    }
    printf("The cube root is %lf\n",x_n);
    return 0;
}
