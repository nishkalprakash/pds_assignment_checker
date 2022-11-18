/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k,d=0;
    double n,D=0.0,e;
    printf("n = ");
    scanf("%lf",&n);
    printf("k = ");
    scanf("%d",&k);
    for (i=1;i<=k;i++)
    {
        d=0;
        for (j=1;j<=n;j++)
        {
            d=d+rand() & 1 ? -1 : 1;
        }
        D=D+(d*d);
    }
    e=sqrt(D/(float)k);
    printf("%lf",e);

    return 0;
}
