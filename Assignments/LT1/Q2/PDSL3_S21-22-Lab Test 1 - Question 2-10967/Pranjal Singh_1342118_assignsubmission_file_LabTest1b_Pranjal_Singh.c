/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int m;
    float x0,x1,e,c;
    printf("enter the value of x0\n");
    scanf("%f",&x0);
    printf("enter the value of e\n");
    scanf("%f",&e);
    printf("enter the max iteration value\n");
    scanf("%d",&m);
    printf("Iteration\tx0\tx1\tError\n");
    for(int i=1;i<=m;i++)
    {
    x1=x0-((x0*x0*x0-25)/(3*x0*x0));
    if((x1-x0)>0)
    c=x1-x0;
    else
    c=x0-x1;
    printf("%d\t%f\t%f\t%f\n",i,x0,x1,c);
    if(c<e)
    break;
    else
    x0=x1;
    };
    printf("The square root is %f\n",x1);
    return 0;
}
