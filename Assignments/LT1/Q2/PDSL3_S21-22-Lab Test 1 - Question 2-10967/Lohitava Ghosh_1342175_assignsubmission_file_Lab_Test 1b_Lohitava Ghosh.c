/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    int i,maxIteration;
    float x0,x1,c,e;
    printf("x0 = ");
    scanf("%f",&x0);
    printf("e = ");
    scanf("%f",&e);
    printf("maxIteration = ");
    scanf("%f",&maxIteration);
    printf("Iteration      x0       x1         Error\n");
    i=1;
    while (i<=maxIteration)
    {
        x1=x0-((x0*x0*x0)-25)/(3*x0*x0);
        c=x0-x1;
        printf("%d        %f     %f     %f\n",i,x0,x1,c);
        if (c>e)
        {
            x0=x1;
        }
        else
        {
            printf("The square root is %f",x1);
            break ;
        }
        i=i+1;
    }
}
